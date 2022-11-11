#include <stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d %d",&a,&b,&c,&x);
    if(a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10 && x>=1 && x<=10 && a!=b && a!=c && b!=c){
        if(x==a || x==b || x==c)
            printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}