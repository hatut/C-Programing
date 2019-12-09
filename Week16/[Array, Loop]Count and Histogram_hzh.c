#include<stdio.h>
#include<string.h>
int a[160],n,i,l,j,w,k,b[30];
char t[30];
int main()
{
	char c;int p=1;
	while((c=getchar())!=EOF){
		if(c>='a'&&c<='z'){
			a[c]++;
			if(p){
				w++;
				p=0;
			}
		}else p=1;
	}
	int mx=-1;
	for(i=97;i<=122;i++)
		if(a[i]){
			t[++k]=i;
			b[k]=a[i];
			if(b[k]>mx) mx=b[k];
		}
	if(mx==-1) return 0;
	if(w>mx) mx=w;
	for(i=mx;i>=1;i--){
		printf("%d%c",i,9);
		for(j=1;j<=k;j++){
			if(b[j]>=i)printf("*");else printf(" ");
		}
		if(w>=i)printf("*");else printf(" ");
		printf("\n");
	}
	printf(" %c",9);
	for(i=1;i<=k;i++)printf("%c",t[i]);
	printf("W\n");
}
