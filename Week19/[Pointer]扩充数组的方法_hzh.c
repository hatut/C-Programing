#include"stdio.h"
#include"pf.h"
int main()
{
	pf[0]=*fun1;
	pf[1]=*fun2;
	pf[2]=*fun3;
	int i;
	char s[11];
	scanf("%s",s);
	for(i=0;i<3;i++){
		pf[i](s);
	}
}
