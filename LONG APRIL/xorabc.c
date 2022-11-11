#include <stdio.h>
#include <math.h>
int main()
{
    long long int t,x;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&x);
        if(x>=1 && x<pow(2,30))
        {
        if(x==4)
        printf("-1\n");

        else if((x+2)%8==0)
        printf("1 3 %lld\n",(((x+2)/8)-1)*4);
        
        else if((x-4)%8==0)
            printf("1 3 %lld\n",(((x-4)/8)*4)+1);

        else if(x%8==2)
            printf("0 1 %lld\n",x/2);

        else
        printf("-1\n");
        }
    }
    return 0;
}