#include <stdio.h>
#include <string.h>
int T,n,a[35],flag,t;
int main(){
	scanf("%d",&T);
	while(T--){
		int i,j,k;
		scanf("%d",&n);
		for(i=1;i<=n;++i){
			scanf("%d",&a[i]);
		}

		for(i=1;i<=n;++i){
			flag = 0;
			for(j=1;j<n-i+1;++j){
				if(a[j] > a[j+1]){
					flag = 1;
					t = a[j];	a[j] = a[j+1];	a[j+1] = t;
				}
				for(k=1;k<=n;++k)	printf("%d%c",a[k]," \n"[k==n]);
			}
			if(!flag)	break;
		}
	}
	return 0;
}