#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define rpb int r=b[i];b[i]=b[j];b[j]=r;
char a[20005][25];
int b[20005];
int c[20005];
int i,j,p,n,m=0;
int main()
{
	scanf("%d",&m);
	int t=0;
	while(m){
		t++;
		scanf("%d",&n);
		gets(a[0]);
		for(i=1;i<=n;i++){
			gets(a[i]);b[i]=i;
		}
		gets(a[0]);
		for(i=1;i<=10;i++){
			int p=0;
			if(a[i]==a[0]){
				p=10;
			}else{
				for(j=0;j<20;j+=2)
				if(a[i][j]==a[0][j]){
					p++;
				}
			}
			c[i]=p;	
		}
		for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(c[b[i]]>c[b[j]]){
				rpb
			}else if(c[b[i]]==c[b[j]]){
				if(b[i]>b[j]){
					rpb
				}
			}
		printf("test case %d:\n",t);
		for(i=1;i<=n;i++){
			printf("Student %d: %d\n",b[i]-1,c[b[i]]);
		}
		m--;
	}
}