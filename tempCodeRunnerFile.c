#include <stdio.h>

void main()
{
    int t, a, b, c, s;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&a,&b,&c);
    s = min(a,b,c);
    if(s==a)
    printf("Draw\n");
    else if(s==b)
    printf("Bob\n");
    else
    printf("Alice\n");
    }
}