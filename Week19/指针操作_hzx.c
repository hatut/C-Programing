#include "fun.h"
void swap(int* p,int* q){
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
void print_array(int *p,int size){
	for(int i=1;i<=size;++i,++p){
		printf("%d\n",*p);
	}
}
void print_matrix(int** mat, int row, int col){
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			printf("%d ",*(*(mat+i)+j));
		}
		printf("\n");
	}
}