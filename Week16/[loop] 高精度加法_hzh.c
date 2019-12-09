#include<stdio.h>
#include<string.h>
char a[105],b[105];
int e[105],n,i,l;
int main()
{
	scanf("%s%s",&a,&b);
	int la=strlen(a),lb=strlen(b);
	if(la>lb)l=la;else l=lb;
	a[l+1]='0';b[l+1]='0';
	for(i=0;i<=l;i++){
		if(la==0||la==l+1) la=l+1;else la--;
		if(lb==0||lb==l+1) lb=l+1;else lb--;
		e[i+1]=(e[i]+a[la]+b[lb]-96)/10;
		e[i]=(e[i]+a[la]+b[lb]-96)%10;
	}
	if(e[l])l++;
	for(i=l-1;i>=0;i--)	printf("%d",e[i]);
}
