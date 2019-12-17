#include <stdio.h>
#include <string.h>
int l,r,n,m,o,opp;
long long a[20005],s[20005],add,t,ans;
int main(){
	scanf("%d%d",&n,&m);
	int i;
	for(i=1;i<=n;++i){
		scanf("%lld",&a[i]);
		s[i] = s[i-1] + a[i];
	}
	opp = 1;
	add = 0;
	for(i=1;i<=m;++i){
		scanf("%d",&o);
		if(o == 1){
			add = -add;
			opp = -opp;
		}
		else if(o == 2){
			scanf("%lld",&t);
			add += t;
		}
		else{
			scanf("%d%d",&l,&r);
			ans = opp*(s[r]-s[l-1])+add*(r-l+1);
			printf("%lld\n",ans);
		}
	}
	return 0;
}