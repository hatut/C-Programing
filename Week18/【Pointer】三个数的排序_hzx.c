void sort(int* a, int* b, int* c){
	int m;
	if(*a > *b){
		m = *a;
		*a = *b;
		*b = m;
	}
	if(*b > *c){
		m = *b;
		*b = *c;
		*c = m;
	}
	if(*a > *b){
		m = *a;
		*a = *b;
		*b = m;
	}
}