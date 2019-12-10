//关于我为什么不会用strcmp这档事 
#include<stdio.h>
#include<string.h>
char a[10000][10000];
int b[10000];
int main()
{
	int i,j,k,n,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%s",&a[i]);
		b[i]=i;
	}
	for(i=1;i<=n;++i)
		for(j=i+1;j<=n;j++){
			int l=strlen(a[b[i]]),r=strlen(a[b[j]]);
			int p=1;int ll=l;
			if(l>r) l=r;
			for(k=0;k<l;k++){
				if(a[b[i]][k]>a[b[j]][k]){
					p=0;break;
				}
				if(a[b[i]][k]<a[b[j]][k]){
					p=-1;break;
				}
			}
			if(p==-1) continue;
			if(p==1)if(ll>r) p=0;
			if(p==0){
				r=b[i];
				b[i]=b[j];
				b[j]=r;
			}
		}
	for(i=1;i<=n;++i){
		printf("%s\n",a[b[i]]);
	}
}
