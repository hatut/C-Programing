#include <stdio.h>
#include <string.h>
char a[105],b[105];
int f[155];
int judge(){
	int i;
	for(i=97;i<=122;++i){
		if(f[i])	return 0;
	}
	return 1;
}
int main(){
	int i;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);++i){
		f[a[i]]++;
	}
	for(i=0;i<strlen(b);++i){
		f[b[i]]--;
	}
	if(judge()){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}