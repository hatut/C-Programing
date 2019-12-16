#include<stdio.h>
#include<string.h>
long long b[20005];
int i,j,p,n,m=0;
long long k;
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%lld",&b[i]);
		
	}
	p=1;
	for(i=1;i<=m;i++){
		int x;
		scanf("%d",&x);
		if(x==1){
			p=-p;
			k=-k;
		}else
		if(x==2){
			int y;
			scanf("%d",&y);
			k+=y;
		}else
		if(x==3){
			int l,r;
			long long s=0;
			scanf("%d%d",&l,&r);
			for(j=l;j<=r;j++)s+=b[j]*p+k;
			printf("%lld\n",s);
		}
	}
}