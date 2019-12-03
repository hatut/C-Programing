#include<stdio.h>
#include<string.h>
int a[160],b[160];
int main()
{
	int n,i,j,k,l;
	char s[100],r[100];
	scanf("%s",&s);
	scanf("%s",&r);
	l=strlen(s);
	if(l!=strlen(r)){
		printf("No");return 0;
	}
	for(i=0;i<l;i++){
		a[s[i]]++;
		b[r[i]]++;
	}
	for(i=1;i<=159;i++)
	if(a[i]!=b[i]){
		printf("No");
		return 0;
	}
	printf("Yes");
}