int gcd(int n,int m){
	int t;
	if(n > m){
		t = n;n = m;m = t;
	}
	if(m%n == 0)	return n;
	return gcd(m,m%n);
}