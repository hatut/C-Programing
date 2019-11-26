#include<stdio.h>
int main()
{
	int n,t,a[100000];
	scanf("%d",&t);
	while(t){
		int i,j,s=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			for(j=1;j<i;j++)
				if(a[j]==a[i]){
					s++;	
					break;
				}
		}
		printf("%d\n",n-s);
		t--;
	}
}