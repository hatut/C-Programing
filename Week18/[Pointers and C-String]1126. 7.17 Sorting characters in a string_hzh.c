char* sortString(const char * const s){
	char * a =malloc(200);
	strcpy(a,s);
	int l=strlen(a),i,j;
	char c;
	for(i=0;i<l;i++)
	for(j=i+1;j<l;j++)
	if(a[i]>a[j]){
		c=a[i];
		a[i]=a[j];
		a[j]=c;
	}
	return a;
}