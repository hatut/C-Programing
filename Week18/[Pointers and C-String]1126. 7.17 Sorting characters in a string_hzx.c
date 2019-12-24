char* sortString(const char * const s){
	char *str = (char*)malloc(sizeof(char)*(strlen(s)+1));
	int i;
	for(i=0;*(s+i) != '\0';++i){
		*(str+i) = *(s+i);
	}
	*(str+i) = '\0';
	char * p = str;
	char o;
	int n = strlen(str);
	for(int i=1;i<=n;++i){
		str = p;
		for(int j=1;j<=n-i;++j,++str){
			if(*(str) > *(str+1)){
				o = *(str);
				*str = *(str+1);
				*(str+1) = o; 
			}
		}
	}
	return p;
}