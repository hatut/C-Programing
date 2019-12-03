#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,l;
	scanf("%d%d",&n,&l);
	while(n){
		char a[100];
		scanf("%s",&a);
		int p=strlen(a),s1=0,s2=0;
		k=1;
		for(i=p-1;i>=0;i--){
			s1+=k*(a[i]-48);
			s2+=k*(a[p-i-1]-48);
			k*=l;
		}
		printf("%d %d\n",s1,s2);
		n--;
	}
}
