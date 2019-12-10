#include <stdio.h>
#include <string.h>
int n;
char a[1005][105],t[105];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(strcmp(a[i],a[j]) > 0){
				memset(t,0,sizeof t);
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	for(int i=0;i<n;++i){
		printf("%s\n",a[i]);
	}
	return 0;
}