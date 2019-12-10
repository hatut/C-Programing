#include <stdio.h>
#include <string.h>
int a[1005],n,T,cnt,ans[45];
int main(){
	scanf("%d",&T);
	while(T--){
		cnt = 1;
		scanf("%d",&n);
		int i;
		for(i=1;i<=n;++i)	a[i] = i;
		i = 1;
		while(cnt <= n-1){
			ans[cnt++] = a[i];
			++i;
			a[n+cnt-1] = a[i];
			i++;
		}
		ans[cnt] = a[i];
		for(i=1;i<=n;++i)	printf("%d ",ans[i]);
		printf("\n");
	}
	return 0;
}