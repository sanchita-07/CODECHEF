#include <stdio.h>
#include <stdlib.h>
int main(){
    int t,x,y,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&y,&n);
        int q = abs(x - y);
        if(q <=n)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
