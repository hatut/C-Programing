#include<stdio.h>
int a[50000];
int i,j,p,n,k,m=0;
int main()
{
	scanf("%d",&m);
	while(m){
		scanf("%d",&n);
		int u;
		while(1){
			n++;u=0;
			for(i=2;i<=10;i++){
				int p=n,r,l=0;
				while(p){
					r=p%i;
					p/=i;
					a[++l]=r;
				}
				int b=1;
				for(j=1;j<=l/2;j++)
					if(a[j]!=a[l-j+1]) b=0;
				if(b) u++;
				if(u==2) break;
			}
			if(u==2){
				printf("%d\n",n);
				break;
			}
		}
		m--;
	}
}