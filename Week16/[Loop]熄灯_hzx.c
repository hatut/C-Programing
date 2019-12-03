#include <stdio.h>
#include <string.h>
int f[55],a[55];
int main(){
	int i,cnt = 1,n,x,y,t = 0;
	scanf("%d%d%d",&n,&x,&y);
	for(i=0;i<n;++i)	f[i] = 1;
	while(cnt <= n){
		if(f[x] && t){
			t--;
		}
		if(f[x] && !t){
			f[x] = 0;
			a[cnt++] = x;
			t = y;
		}
		x++;
		x %= n;
	}
	for(i=1;i<=n;++i){
		printf("%d ",a[i]);
	}
	return 0;
}