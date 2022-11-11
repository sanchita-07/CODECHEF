#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,a[1000],sum=0;
        scanf("%d %d",&n,&x);
        for(int i=0; i<n-1; i++){
        scanf("%d",&a[i]);
        sum += a[i];
        }
        if((n*x)-sum>=0){
            printf("%d\n",(n*x)-sum);
        }
        else
        printf("0\n");

    }
    return 0;
}