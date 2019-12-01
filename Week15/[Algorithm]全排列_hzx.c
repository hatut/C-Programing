#include<stdio.h>
int v[10],a[10],n;
void dfs(int k){
	if(k == n+1){
		for(int i=1;i<=n;++i){
			printf("%d ",a[i]);
		}
		printf("\n");
		return ;
	}
	for(int i=1;i<=n;++i){
		if(!v[i]){
			v[i] = 1;
			a[k] = i;
			dfs(k+1);
			v[i] = 0;
		}
	}
}
int main(){
	scanf("%d",&n);
	dfs(1);
	return 0;
}