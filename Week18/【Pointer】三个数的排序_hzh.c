void sort(int *a, int *b, int *c)
{
	int d[4],i,j;
	d[1]=*a;d[2]=*b;d[3]=*c;
	for(i=1;i<=3;i++)
	for(j=i+1;j<=3;j++)
	if(d[i]>d[j]){
		int e=d[i];
		d[i]=d[j];
		d[j]=e;
	}
	*a=d[1];
	*b=d[2];
	*c=d[3];
}