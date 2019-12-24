#include <stdio.h>
int a[105],t[105],n;
void Mergesort(int l,int r){
  //printf("%d %d\n",l,r);
  if(l >= r)  return ;
  int mid = l+r>>1;
  Mergesort(l,mid);
  Mergesort(mid+1,r);
  int i,j;
  i = l;  j = mid+1;
  for(int cnt=l;cnt<=r;++cnt){
    if((a[i] <= a[j] || j > r) && i <= mid){
      t[cnt] = a[i++];
    }else
    if((a[i] > a[j] || i > mid) && j <= r){
      t[cnt] = a[j++];
    }
  }
  for(int i=l;i<=r;++i){
    a[i] = t[i];
  }
  for(int k=1;k<=n;++k) printf("%d%c",a[k]," \n"[k==n]);
}
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;++i){
    scanf("%d",&a[i]);
  }
  Mergesort(1,n);
  return 0;
}