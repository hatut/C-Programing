void swapAnyThing(void *a, void *b, size_t val_size)
{
	void *t=malloc(val_size);
	memcpy(t,a,val_size);
	memcpy(a,b,val_size);
	memcpy(b,t,val_size);
	free(t);
}