#include<stdio.h>
#include<string.h>
char a[55][55];
char s[3000];
int main()
{
	int n,i,j,k=0,l,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%s",&a[i]);
	}
	int x=1,y=0;s[k++]=a[x][y];
	while(a[x][y]){
		a[x][y]=0;
		if(a[x+1][y]){
		for(i=x+1;i<=n-x+1;i++){
			s[k++]=a[i][y];
			a[i][y]=0;
		}
		x=n-x+1;
		}
		if(a[x][y+1]){
		for(i=y+1;i<=m-y-1;i++){
			s[k++]=a[x][i];
			a[x][i]=0;
		}
		y=m-y-1;
		}
		if(a[x-1][y]){
		for(i=x-1;i>=n-x+1;i--){
			s[k++]=a[i][y];
			a[i][y]=0;
		}
		x=n-x+1;
		}
		if(a[x][y-1]){
		for(i=y-1;i>=m-y;i--){
			s[k++]=a[x][i];
			a[x][i]=0;
		}
		y=m-y;x++;s[k++]=a[x][y];
		}
	}
	printf("%s\n",s);
	scanf("%d",&l);
	int ll=n*m;
	for(i=1;i<=l;i++){
		char p[100];
		scanf("%s",&p);
		int pl=strlen(p);
		for(j=0;j<ll;j++){
			if(p[0]==s[j]){
				int d=0;
				while(p[d]==s[j]){
					j++;d++;
				}
				if(d==pl)
				for(k=j-1;k>=j-d+1;k--)
				s[k]='*';
				j--;
			}
		}
	}
	printf("%s",s);
}