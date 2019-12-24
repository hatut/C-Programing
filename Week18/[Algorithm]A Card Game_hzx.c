#include <stdio.h>
int n,a,f[15],sum;
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;++i){
    scanf("%d",&a);
    f[a]++;
  }
  for(int i=1;i<=9;++i){
    sum += i*f[i];
  }
  if(sum % 3 == 0 && f[0] && sum > 0){
    for(int i=9;i>=3;i-=2){
      for(int j=1;j<=f[i];++j){
        printf("%d",i);
      }
    }
    for(int i=1;i<=f[0];++i)  printf("0");
    printf("\n");
  }
  else{
    printf("no such number\n");
  }
  return 0;
}