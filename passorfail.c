#include <stdio.h>

void main()
{
    int T;
    scanf("%d",&T);
    int n, x, p;
    while(T--){
        scanf("%d %d %d",&n,&x,&p);
        int marks = x*3 + (n-x)*(-1);
        if(marks>=p)
        printf("PASS\n");
        else
        printf("FAIL\n");
    }
}