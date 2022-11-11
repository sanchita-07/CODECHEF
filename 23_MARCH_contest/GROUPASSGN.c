#include <stdio.h>

int main()
{
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&x);
        int y = (2*n + 1) - x;
        printf("%d\n",y); 
    }
    return 0;
}