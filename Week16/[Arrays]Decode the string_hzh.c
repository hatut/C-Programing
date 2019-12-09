#include<stdio.h>
#include<string.h>
char p[10000];
int main()
{
	int n,i,j,k,l;
	scanf("%s",&p);
	l=strlen(p);
	for(i=0;i<l;i++){
		if(p[i]>='0'&&p[i]<='9'){
		char a[100];int kk=0;
		while(p[i]>='0'&&p[i]<='9'){
			a[kk++]=p[i];
			i++;
		}int o=1,u=0;
		for(j=kk-1;j>=0;j--){
			u+=o*(a[j]-48);
			o*=10;
		}
		if(u>7) u=u%7+1;
		for(j=1;j<=u;j++){
			printf("%c",p[i-kk-1]);
		}
		i--;
		}else {
			if(p[i+1]<'0'||p[i+1]>'9')
			printf("%c",p[i]);
		}
	}
}