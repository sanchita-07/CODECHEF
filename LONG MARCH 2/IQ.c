#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x>=100 && x<=169){
     if(x+7>170)
         printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}