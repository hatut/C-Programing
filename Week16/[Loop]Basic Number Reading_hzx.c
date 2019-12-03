#include <stdio.h>
#include <string.h>
int b,c,d,len;
char a[105];
int integer(){
	int ans = 0,i;
	for(i=0;i<len;++i){
		ans = ans*b + a[i] - '0';
	}
	return ans;
}
int reverse(){
	int ans = 0,i;
	for(i=len-1;i>=0;--i){
		ans = ans*b + a[i] - '0';
	}
	return ans;
}
int main(){
	int T;
	scanf("%d%d",&T,&b);
	while(T--){
		//printf("%d\n",b);
		memset(a,0,sizeof a);
		scanf("%s",a);
		len = strlen(a);
		c = integer();
		d = reverse();
		printf("%d %d\n",c,d);
	}
	return 0;
}