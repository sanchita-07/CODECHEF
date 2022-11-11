#include <stdio.h>

int main()
{
    int t,n,x,y,s[1000];
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        if(t>=1 && t<=100){
            scanf("%d %d %d",&n,&x,&y);
            if(n>=2 && n<=1000 && x>=1 && x<=100 && y>=1 && y<=100){
                scanf("%d",&s[1000]);
                for(int i=1; i<=n; i++){
                    if(s[i]==0){
                        if(s[i-1]==1)
                        printf("%d",y);
                        else if (s[i+1]==1)
                        printf("%d",x);
                    }
                }
            }
        }
    }
    return 0;
}