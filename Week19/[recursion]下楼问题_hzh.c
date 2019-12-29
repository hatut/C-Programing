#include <stdlib.h>
#include <stdio.h>
int h,s;
int dow(int a){
	if(a==0) return 1;
	int i,j=0;
	for(i=1;i<=s;i++)
	if((a-i)>=0)
		j+=dow(a-i); 
	return j;
}
int main()
{
	scanf("%d%d",&h,&s);
	printf("%d",dow(h));
}