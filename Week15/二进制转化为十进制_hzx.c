long long BintoDec(char binary[]){
	int i = 0;
	long long ans = 0;
	while(binary[i] != '\0'){
		ans = ans * 2 + binary[i] - '0';
        i++;
	}
	return ans;
}