#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,l;
	scanf("%d%d",&n,&l);
	while(n){
		char a[100];
		scanf("%s",&a);
		int p=strlen(a),s=0;
		k=1;
		for(i=p-1;i>=0;i--){
			s+=k*(a[i]-48);
			k*=l;
		}
		printf("%d ",s);s=0;k=1;
		for(i=0;i<p;i++){
			s+=k*(a[i]-48);
			k*=l;
		}printf("%d\n",s);
		n--;
	}
}