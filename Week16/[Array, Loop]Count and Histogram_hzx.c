#include <stdio.h>
#include <string.h>
char a[405],ans[35];
int cnt,f[35],m,len;
int max(int a,int b){
    return a > b ? a : b;
}
int main(){
    while(scanf("%s",a) != EOF){
        //printf("%s\n",a);
        f[26]++;
        len = strlen(a);
        for(int i=0;i<len;++i){
            f[a[i]-97]++;
        }
        memset(a,0,sizeof a);
    }
    cnt = 1;
    for(int i=0;i<26;++i){
        if(f[i]){
            ans[cnt++] = i+'a';
        }
        m = max(m,f[i]);
    }
    m = max(m,f[26]);
    cnt--;
    for(int i=m;i>0;--i){
        printf("%d\t",i);
        for(int j=1;j<=cnt;++j){
            if(f[ans[j]-97] >= i)	printf("*");
            else					printf(" ");
        }
        if(f[26] >= i)	printf("*");
        else			printf(" ");
        printf("\n");
    }
    printf(" \t%sW\n",ans+1);
    return 0;
}