#include<stdio.h>
int b[9],a[9],n;
int bo(int x,int y)
{
	a[y]=x;
	int i;
	if(y==n){
		for(i=1;i<=n;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
	for(i=1;i<=n;i++)
	if(!b[i]){
		b[i]=1;
		bo(i,y+1);
		b[i]=0;			
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		b[i]=1;
		bo(i,1);
		b[i]=0;
	}
}