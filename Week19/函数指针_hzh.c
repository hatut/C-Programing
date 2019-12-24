
int * doubleCapacity(const int *list, int size, int addSize)
{
	int *a=malloc((size+addSize)*sizeof(int));
	memset(a,0,(size+addSize)*sizeof(int));
	memcpy(a,list,size*sizeof(int));
	
	return a;
}