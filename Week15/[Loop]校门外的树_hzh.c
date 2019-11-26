#include<stdio.h>
int a[10001];
int main()
{
	int i,n,t,p;
	scanf("%d%d",&t,&p);
	for(i=1;i<=p;i++){
		int x,y,j;
		scanf("%d%d",&x,&y);
		for(j=x;j<=y;j++)
			if(!a[j]){
				a[j]=1;
				t--;
			}
	}
	printf("%d",t+1);
}