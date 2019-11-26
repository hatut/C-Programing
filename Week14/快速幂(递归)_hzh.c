int quick_power(int a,int b,int m){
	if(!b)return 1;
	if(b%2==1)return a*quick_power(a,b-1,m)%m;
	int c=quick_power(a,b/2,m)%m;
	return c*c%m;
}