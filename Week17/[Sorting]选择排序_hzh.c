#include<stdio.h>
#include<string.h>
int b[10000];
int i,j,k,n,m=0;
int main()
{
	scanf("%d",&m);
	while(m){
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;++i)
	for( ;i<n;++i){
		int r=999999999,s=0;
		for(j=i;j<=n;j++){
			if(b[j]<r){
				r=b[j];
				s=j;
			}
		}
		r=b[i];
		b[i]=b[s];
		b[s]=r;
		for(j=1;j<=n;j++)
			printf("%d ",b[j]);
		printf("\n");
	}
	m--;
	}
	
}