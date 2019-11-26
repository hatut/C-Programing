#include<stdio.h>
int L,M,l,r,f[10005],ans;
int main(){
	scanf("%d%d",&L,&M);
	for(int i=1;i<=M;++i){
		scanf("%d%d",&l,&r);
		for(int j=l;j<=r;++j){
			f[j] = 1;
		}
	}
	for(int i=0;i<=L;++i){
		if(!f[i]){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}