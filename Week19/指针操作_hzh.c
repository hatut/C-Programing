
void swap(int* p, int* q)
{
	void *t=malloc(sizeof(int));
	memcpy(t,p,sizeof(int));
	memcpy(p,q,sizeof(int));
	memcpy(q,t,sizeof(int));
	free(t);
}
void print_array(int* p, int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("%d\n",p[i]);
	}
}
void print_matrix(int** mat, int row, int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
}
