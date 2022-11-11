#include <stdio.h>

int main()
{
    int t,n,m,k;
    scanf("%d",&t);
    if(t>=1 && t<=1000){
    for(int i=1;i<t;i++){
        scanf("%d %d %d",&n,&m,&k);
        if(n>=1 && n<=100 && m>=1 && m<=100 && k>=0 && k<=m){
            if(n+k<=m)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
    }
    return 0;
}