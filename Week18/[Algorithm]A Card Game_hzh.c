#include <stdio.h>
int b[6];
int a[100005];
int main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		k+=a[i];
		b[(a[i]+1)/2]++;
	}
	if((k%3==0)&&b[0]>0&&k!=0){
		for(j=5;j>=2;j--)
			for(i=1;i<=b[j];i++)printf("%d",(j-1)*2+1);
		for(i=1;i<=b[0];i++)printf("0");
	}else printf("no such number");
}