#include<stdio.h>
int a[10];
int main()
{
	int i,n,t,p;
	scanf("%d",&t);
	while(t){
		scanf("%d",&n);
		for(i=0;i<=9;i++)a[i]=0;
		for(i=1;i<=n;i++){
			int j=i;
			a[j%10]++;
			while(j){
				j/=10;
				if(!j)break; 
				a[j%10]++;
			}
		}
		for(i=0;i<=9;i++)
		printf("%d ",a[i]);
		t--;
		printf("\n");
	}	
}