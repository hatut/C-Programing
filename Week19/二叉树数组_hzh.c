#include"stdio.h"
#include<stdlib.h>
int a[100000],cnt=0;
void cret(int r,int s)
{
	if((a[r*2+1]==-1)&&s>a[r]){
		a[r*2+1]=s;
	}else
	if((a[r*2]==-1)&&s<=a[r]){
		a[r*2]=s;
	}else{
		if(s>a[r])cret(r*2+1,s);
			else cret(r*2,s);
	}
}
int main()
{
	int i,n,t,s,m=1;;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 m*=2;
	for(i=1;i<=m;i++)
		a[i]=-1;
	scanf("%d",&t);
	a[1]=t;
	for(i=2;i<=n;i++){
		scanf("%d",&s);
		cret(1,s);
	}
	i=1;
	while(n){
		if(a[i]!=-1){
			printf("%d\n",a[i]);
			n--;
		}
		i++;
	}
}
