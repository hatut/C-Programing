#include<stdio.h>
int a[101][101];
int main()
{
	int i,n=1,t,j,k;
	scanf("%d",&t);
	int x=1,y=1;
	while(!a[x][y]){
		for(i=y;i<=t-y+1;i++)
			a[x][i]=(n++);
		y=t-y+1;
		for(i=x+1;i<=t-x+1;i++)
			a[i][y]=(n++);
		x=t-x+1;
		for(i=y-1;i>=t-y+1;i--)
			a[x][i]=(n++);
		y=t-y+1;
		for(i=x-1;i>=t-x+2;i--)
			a[i][y]=(n++);
		x=t-x+2;
		y++;
	}
	for(i=1;i<=t;i++){
		
	for(j=1;j<=t;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}