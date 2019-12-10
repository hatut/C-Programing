//It's 队列 队列 队列 
#include<stdio.h>
#include<string.h>
int b[10000];
int i,j,k,n,m=0;
int main()
{
	scanf("%d",&m);
	while(m){
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			b[i]=i;
		int h=1,e=n;
		while(n){
		printf("%d ",b[h]);
		 h+=2;e+=1;
		 b[e]=b[h-1];
		 n--;
		}
		printf("\n");
		m--;
	}
}
