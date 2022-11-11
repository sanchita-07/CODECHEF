#include <stdio.h>

int main()
{
    long int t,x,y,m;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld %ld %ld",&x,&y,&m);
        if((x*m)<y)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}