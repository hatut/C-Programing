#include<stdio.h>
int a[35];
int i,j,p,n,k,m=0;
int main()
{
	scanf("%d",&m);
	while(m){
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n-i;j++)
			{	
				if(a[j]>a[j+1]){
					int r=a[j];
					a[j]=a[j+1];
					a[j+1]=r;
				}
				for(k=1;k<=n;k++){
					printf("%d ",a[k]);
				}
				printf("\n");
			}
			int b=0;
			for(k=1;k<=n-1;k++)
			if(a[k]>a[k+1]) b=1;
			if(!b){
				for(j=1;j<=n-i-1;j++){
					for(k=1;k<=n;k++)
						printf("%d ",a[k]);
					printf("\n");
				}
				break;
			}
		}
		m--;
	}
}