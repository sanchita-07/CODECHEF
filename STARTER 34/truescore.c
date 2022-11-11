#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d;
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        if(a<=c && b<=d)
        printf("POSSIBLE\n");
        else
        printf("IMPOSSIBLE\n");
    }
    return 0;
}