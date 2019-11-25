double m(int n){
	if(n == 1)	return 0.5;
	return (1.0*n)/(1.0*(n+1)) + m(n-1);
}