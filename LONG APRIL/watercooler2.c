#include <stdio.h>

int main()
{
    long int t,x,y;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld %ld",&x,&y);
        printf("%ld\n",(y-1)/x);
    }
    return 0;
}