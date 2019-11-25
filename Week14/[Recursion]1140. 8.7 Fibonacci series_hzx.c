int fibonacci(int n){
	if(n == 1||n == 0)	return 1;
	return 1 + fibonacci(n-2) + fibonacci(n-1);
}