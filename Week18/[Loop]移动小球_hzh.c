#include<stdio.h>
#include<stdlib.h>=
int n,a[500005][2],m;
int main()
{
    int i,j,k,t,l,r;
    scanf("%d",&t);
    while(t){
    	scanf("%d%d",&n,&m);
    	a[1][1]=2;a[n][0]=n-1;a[1][0]=0;a[n][1]=0;
    	for(i=2;i<=n-1;i++){
     	   a[i][0]=i-1;
     	   a[i][1]=i+1;
   		}
   		for(i=1;i<=m;i++){
   			int x,y,z;
   			scanf("%d%d%d",&x,&y,&z);
   			a[a[y][0]][1]=a[y][1];
   			a[a[y][1]][0]=a[y][0];
   			if(x==1){
   				a[a[z][0]][1]=y;
   				a[y][1]=z;
   				a[y][0]=a[z][0];
   				a[z][0]=y;
			}else{
				a[a[z][1]][0]=y;
				a[y][0]=z;
				a[y][1]=a[z][1];
				a[z][1]=y;
			}
		}
		for(i=1;i<=n;i++){
			if(!a[i][0])l=i;
			if(!a[i][1])r=i;
		}
		while(n){
			printf("%d ",l);
			l=a[l][1];
			n--;
		}
		printf("\n");
    	t--;
	}
}