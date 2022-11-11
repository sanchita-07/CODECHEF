#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d %d",&n,&x);
        if(n%2==0){
        for(int i=1; i<=n/2; i++)
       printf("%d %d ", x-i,x+i);
       printf("\n");
        }
        else if(n%2!=0){
            printf("%d ",x);
            for(int i=1; i<=n/2; i++){
                printf("%d %d ",x-i,x+i);
            }
            printf("\n");
        }
    }
    return 0;
}