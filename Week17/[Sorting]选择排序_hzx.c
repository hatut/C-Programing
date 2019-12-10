#include <stdio.h>
#include <string.h>
int n;
int a[1005],t,f,T,mi;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		int i;
		for(i=1;i<=n;++i){
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n-1;++i){
			mi = 1e9;
			int j;
			for(j=i;j<=n;++j){
				if(a[j] < mi){
					mi = a[j];
					f = j;
				}
			}
			t = a[f];	a[f] = a[i];	a[i] = t;
			for(j=1;j<=n;++j)	printf("%d%c",a[j]," \n"[j==n] );
		}
	}
	return 0;
}