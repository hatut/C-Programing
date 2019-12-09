#include<stdio.h>
int lena,lenb,c[105],len;
char a[105],b[105],t;
int max(int a,int b){
	return a < b ? b : a;
}
void add(){
	int i=0;
	len = max(lena,lenb);
	for(i=1;i<=len;++i){
		if(!a[i]){
			a[i] = 48;
		}
		if(!b[i]){
			b[i] = 48;
		}
		c[i] += a[i] + b[i] - 2 * '0';
		if(c[i] >= 10){
			c[i+1]++;
			c[i] -= 10;
		}
	}
	if(c[len+1])	len++;
}
int main(){
	int i;
	scanf("%s",a+1);
	scanf("%s",b+1);
	lena = strlen(a+1);
	lenb = strlen(b+1);
	for(i=1;i<=lena/2;++i){
		t = a[i];
		a[i] = a[lena-i+1];
		a[lena-i+1] = t;
	}
	for(i=1;i<=lenb/2;++i){
		t = b[i];
		b[i] = b[lenb-i+1];
		b[lenb-i+1] = t;
	}
	add();
	for(i=len;i>=1;--i){
		printf("%d",c[i]);
	}
	return 0;
}