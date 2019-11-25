
 double m(int n)
 {
 	if(n==0) return 0;
 	return (double)n/(double)(n+1)+m(n-1);
 }