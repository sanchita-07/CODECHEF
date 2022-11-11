#include <stdio.h>

int main()
{
    int t,n,m,y;
    scanf("%d",&t);
    if(t>=1 && t<=100){
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&m);
        if(n>=1 && n<=100 && m>=0 && m<=100){
            if(n>=m)
            y = m + (n-m)*2;
            else
            y = n;
            printf("%d\n",y);
        }
    }
    }
    return 0;
}