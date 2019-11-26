#include<stdio.h>
int T,n,a[1000005],ans,flag;
int main(){
	scanf("%d",&T);
	while(T--){
		ans = 0;
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			flag = 0;
			scanf("%d",&a[i]);
			for(int j=1;j<i;++j){
				if(a[j] == a[i]){
					flag = 1;
					break;
				}
			}
			if(!flag){
				ans++;
			}
		}
		printf("%d\n",ans);

	}
	return 0;
}