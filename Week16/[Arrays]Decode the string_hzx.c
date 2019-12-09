#include <stdio.h>
#include <string.h>
char a[1005];
int len,cnt,b;
int length(int i){
	int ans = 0;
	while(a[i+cnt] >= '0' && a[i+cnt] <= '9'){
		ans = ans * 10 + a[i+cnt] - '0';
		cnt++;
	}
	if(ans > 7 )	return (ans%7+1);
	return	ans;
}
int main(){
	int i,j;
	scanf("%s",a);
	len = strlen(a);
	for(i=0;i<len;++i){
		if(a[i] >= '0' && a[i] <= '9'){
			cnt = 0;
			b = length(i);
			for(j=1;j<=b-1;++j){
				printf("%c",a[i-1]);
			}
			i += cnt - 1;
		}
		else printf("%c",a[i]);
	}
	return 0;
}