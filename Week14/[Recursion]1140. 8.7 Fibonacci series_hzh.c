
int fb(int n)
{
	if(n==1||n==0) return 1;
	return fb(n-1)+fb(n-2);
}
int fibonacci(int n){
	return fb(n)*2-1;
}