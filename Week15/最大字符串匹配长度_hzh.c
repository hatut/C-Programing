#include<stdio.h>
#include<string.h>
int main()
{
	int i,n=0,t,j,k;
	scanf("%d",&t);
	while(t){
		n=0;
	char s[10001];
	char a[10001];
	scanf("%s",&s);
	scanf("%s",&a);
	int l=strlen(s),p=strlen(a);
	
	for(i=0;i<l;i++){
		if(s[i]==a[0]){
			k=1;j=i+1;
			if(k==p) k=0;
			int o=0;
			while(s[j]==a[k]){	
				j++;			
				k++;				
				if(k==p){
					o=1;
					k=0;
				}
			}
			if(o||p==1){
				n+=j-i;
			}
			i=j+1;			
		}
	} 
	printf("%d\n",n);
		t--;
	}
}