#include <stdio.h>
#include <string.h>
char a[10005],b[10005];
int ans,lena,lenb,T;
int max(int a,int b){
	return a < b ? b : a;
}
int count(int x){
	int y = 0,t=0;
	while(x < lena){
		if(a[x] == b[y])	t++;
		else{
			break;
		}
		y++;
		y %= lenb;
		x++;
	}
	//printf("%d\n",t);
	if(t < lenb)	return -1;
	return t;
}
int main(){
	scanf("%d",&T);
	while(T--){
		ans = 0;
		memset(a,0,sizeof a);
		memset(b,0,sizeof b);
		scanf("%s",a);
		scanf("%s",b);
		lena = strlen(a);
		lenb = strlen(b);
		for(int i=0;i<strlen(a);++i){
			if(a[i] == b[0]){
                //printf("---->%d\n",i);
				int t = count(i);
				if(t != -1){
					i += t-1;
					ans = max(ans,t);
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
