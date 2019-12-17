#include <stdio.h>
#include <string.h>
int n;
int K(int b,int s){
	int i,cnt = 0,a[105];
	while(s){
		a[++cnt] = s % b;
		s /= b;
	}
	for(i=1;i<=cnt/2;++i){
		if(a[i] != a[cnt-i+1])	return 0;
	}
	return 1;
}
int Judge(int s){
	int i,ans = 0;
	for(i=2;i<=10;++i){
		if(K(i,s)){
			ans++;
		}
		if(ans == 2)	return 1;
	}
	//if(s == 563786)	printf("%d",ans);
	return 0;
}
int main(){
	int s,i;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d",&s);
		while(1){
			s++;
			if(Judge(s)){
				printf("%d\n",s);
				break;
			}
		}
	}
	return 0;
}