#include <stdio.h>
void P(int n){
	char x;
	if(n == 1){
		scanf("%c",&x);
		printf("%c",x);
		return ;
	}
	else{
		scanf("%c",&x);
		P(n-1);
		printf("%c",x);
	}
}
int main(){
	P(5);
	printf("\n");
}
