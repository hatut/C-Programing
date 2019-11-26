#include<stdio.h>

void hno(int n,int x,int y,int z)
{
	if(n==1)
		printf("%d%d\n",x,z);
	else{
		hno(n-1,x,z,y);
		printf("%d%d\n",x,z);
		hno(n-1,y,x,z);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	hno(n,1,2,3);
 } 