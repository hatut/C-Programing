int quick_power(int a, int b, int p){
	if(b == 1)	return a%p;
	else{
		if(b % 2 == 0){
			return (quick_power(a,b/2,p)%p)*(quick_power(a,b/2,p)%p)%p;
		}
		else{
			return (a*((quick_power(a,b/2,p)%p)*(quick_power(a,b/2,p)%p)%p)%p);
		}
	}

}