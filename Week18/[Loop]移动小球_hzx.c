#include <stdio.h>//链表
int n,m,l,r,Lnow,Rnow,Lpre,Rpre,pre,now,o,T;
struct node
{
  int l,r;
}a[500005];
int main(){
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&n,&m);
        for(int i=0;i<=n+1;++i){
            a[i].l = i-1;
            a[i].r = i+1;
        }
        for(int i=1;i<=m;++i){
            scanf("%d%d%d",&o,&pre,&now);
            if(o == 1){
                Lpre = a[pre].l;
                Rpre = a[pre].r;
                a[Lpre].r = a[pre].r;
                a[Rpre].l = a[pre].l;
                Lnow = a[now].l;
                a[Lnow].r = pre;
                a[pre].l = Lnow;
                a[pre].r = now;
                a[now].l = pre;
            }else{
                Lpre = a[pre].l;
                Rpre = a[pre].r;
                a[Lpre].r = a[pre].r;
                a[Rpre].l = a[pre].l;
                Rnow = a[now].r;
                a[Rnow].l = pre;
                a[pre].l = now;
                a[pre].r = Rnow;
                a[now].r = pre;
            }
        }
        for(int i=a[0].r;i != n+1;i = a[i].r){
            printf("%d ",i);
        }
        printf("\n");
    }
  return 0;
}