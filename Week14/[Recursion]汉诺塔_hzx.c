#include<stdio.h>
void hanni(int x,int a,int b,int c){
	//printf("x:--->%d\n",x);
	if(x == 1){
		printf("%d%d\n",a,c);
		return ;
	}
	hanni(x-1,a,c,b);
	printf("%d%d\n",a,c);
	hanni(x-1,b,a,c);
}
int main(){
	int n;
	scanf("%d",&n);
	hanni(n,1,2,3);
	return 0;
}
