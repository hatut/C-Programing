#include<stdio.h>
#include<stdlib.h>=
int t[105];
int n,a[105];
void update(int l,int m,int r)
{
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r){
        if(a[i]<a[j]) t[k++]=a[i++];
            else t[k++]=a[j++];
    }
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    memcpy(a+l,t+l,sizeof(int)*(r-l+1));
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
void brk(int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        brk(l,m);
        brk(m+1,r);
        update(l,m,r);
    }
}
int main()
{
    int i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    brk(0,n-1);
}