#include <stdio.h>
#include <string.h>
int T,n,f[105],ans[105],cnt,t;
char s[105][25];
int main(){
	scanf("%d",&T);
	while(T--){
		int i,j;
		scanf("%d%*c",&n);
		for(i=0;i<n;++i){
			f[i] = 0;
		}
		for(i=0;i<=n;++i){
			for(j=0;j<=18;++j)	scanf("%c",&s[i][j]);
			scanf("%*c");
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<=18;j += 2){
				if(s[i][j] == s[n][j])	f[i]++;
			}
		}
		printf("test case %d:\n",++cnt);
		for(i=0;i<n;++i)	ans[i] = i;
		for(i=0;i<n;++i){
			for(j=0;j<n-i-1;++j){
				if(f[j] > f[j+1]){
					t = f[j];	f[j] = f[j+1];	f[j+1] = t;
					t = ans[j];	ans[j] = ans[j+1];	ans[j+1] = t;
				}
			}
		}
		for(i=0;i<n;++i){
			printf("Student %d: %d\n",ans[i],f[i]);
		}
	}
	return 0;
}