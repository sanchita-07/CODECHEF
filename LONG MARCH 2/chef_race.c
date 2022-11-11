#include <stdio.h>

int main()
{
    int t,a,b,x,y;
    scanf("%d",&t);
    if(t>=1 && t<=144){
        while(t--){
            scanf("%d %d %d %d",&a,&b,&x,&y);
            if(a>=1 && a<=4 && b>=1 && b<=4 && x>=1 && x<=4 && y>=1 && y<=4 && a!=b && x!=y){
                if(a!=x && b!=x && a!=y && b!=y)
                printf("2\n");
                else if(a==x && b==y || a==y && b==x)
                printf("0\n");
                else
                printf("1\n");
            }
        }
    }
    return 0;
}