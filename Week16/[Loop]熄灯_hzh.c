#include<stdio.h>
int p[10000];
int main()
{
	int n,i,j,k,l,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	n=a;
	a--;p[b]=1;printf("%d ",b);
	while(a){
		for(i=1;i<=c;i++){	
			b++;
			if(b==n)b=0;
			while(p[b]){
				b++;
				if(b==n)b=0;
			}
		}printf("%d ",b);
		p[b]=1;
		a--;
	}
	
}