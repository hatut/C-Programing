long long BintoDec(char s[])
{
	long long i,t=0,p=1;
	int l=strlen(s);	
	for(i=l-1;i>=0;i--){
		if(s[i]=='1') t+=p;
		p*=2;
	} 
	return t;
}