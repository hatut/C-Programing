#include<stdio.h>
int f[15],T,n,number;
int main(){
	scanf("%d",&T);
	while(T--){
		for(int i=0;i<10;++i){
			f[i] = 0;
		}
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			number = i;
			while(number){
				f[number%10]++;
				number /= 10;
			}
		}
		for(int i=0;i<10;++i){
			printf("%d ",f[i]);
		}
		printf("\n");
	}
	return 0;
}