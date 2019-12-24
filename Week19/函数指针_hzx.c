#include <stdio.h>
#include "pf.h"
int main(){
	char s[15];
	pf[0] = fun1;
	pf[1] = fun2;
	pf[2] = fun3;
	scanf("%s",s);
	for(int i=0;i<3;++i){
		pf[i](s);
	}
	return 0;
}