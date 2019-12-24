int *doubleCapacity(int *list, int size, int addSize){
    int* New = (int *)malloc((size+addSize)*sizeof(int));
    for(int i=0;i<size;++i){
        *(New+i) = *(list+i);
    }
    for(int i=0;i<addSize;++i){
        *(New+size+i) = 0;
    }
    return New;
}