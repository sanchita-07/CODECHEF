#include <stdio.h>
long long int gcd(long long int a,long long int b){
    if(a%b==0)
        return b;
        return gcd(b,a%b);
}
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        if(a==1 || b==1)
        printf("-1\n");
        else if(gcd(a,b)==1)
            printf("1\n");
        else
            printf("0\n");
        
    }
    return 0;
}