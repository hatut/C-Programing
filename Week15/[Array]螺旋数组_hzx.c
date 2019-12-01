#include<stdio.h>
int n,x,y,cnt,mp[105][105];
int main(){
	scanf("%d",&n);
	cnt = 1;
	x = y = 1;
	while(cnt <= n*n){
		while(mp[x][y] == 0 && y <= n){
			mp[x][y] = cnt++;
			y++;
		}
		y--;
		x++;
		while(mp[x][y] == 0 && x <= n){
			mp[x][y] = cnt++;
			x++;
		}
		x--;
		y--;
		while(mp[x][y] == 0 && y >= 1){
			mp[x][y] = cnt++;
			y--;
		}
		y++;
		x--;
		while(mp[x][y] == 0 && x >= 1){
			mp[x][y] = cnt++;
			x--;
		}
		x++;
		y++;
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			printf("%d ",mp[i][j]);
			//else		printf("%-4d",mp[i][j]);
		}
		printf("\n");
	}
	return 0;
}