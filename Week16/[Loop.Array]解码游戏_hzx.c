#include <stdio.h>
#include <string.h>
char a[55][55],b[15][50],ans[2500],fans[2500];
int n,m,f[55][55];
void getans(){
	int x = 1,y = 1,cnt = 1;
	while(cnt <= n*m){
		while(!f[x][y] && x <= n){
			ans[cnt++] = a[x][y];
			f[x][y] = 1;
			x++;
		}
		x--;
		y++;
		while(!f[x][y] && y <= m){
			ans[cnt++] = a[x][y];
			f[x][y] = 1;
			y++;
		}
		y--;
		x--;
		while(!f[x][y] && x >= 1){
			ans[cnt++] = a[x][y];
			f[x][y] = 1;
			x--;
		}
		x++;
		y--;		
		while(!f[x][y] && y >= 1){
			ans[cnt++] = a[x][y];
			f[x][y] = 1;
			y--;
		}	
		y++;
		x++;	
	}
}
int main(){
	int i,t;
	char *tPtr;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;++i){
		scanf("%s",a[i]+1);
	}
	getans();
	printf("%s\n",ans+1);
	scanf("%d",&t);
	for(i=1;i<=t;++i){
		scanf("%s",b[i]);
	}
	strcpy(fans+1,ans+1);
	for(i=1;i<=t;++i){
		int len = strlen(b[i]),cnt;
		tPtr = strstr(fans+1,b[i]);
		while(tPtr != NULL){
			tPtr++;
			cnt = 1;
			while(cnt < len){
				*tPtr = '*';
				tPtr++;
				cnt++;
			}
			tPtr = strstr(fans+1,b[i]);
		}
	}
	
	printf("%s",fans+1);
	return 0;
}