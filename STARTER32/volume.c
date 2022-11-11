#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        if(t>=1 && t<=100){
            scanf("%d %d",&x,&y);
            if(x>=1 && x<=100 && y>=1 && y<=100){
                int v = abs(x-y);
                printf("%d",v);
            }
        }
    }
    return 0;
}