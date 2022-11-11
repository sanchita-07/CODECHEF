#include <stdio.h>

long int GDC(long int a, long int b){
    if(a%b==0)
        return b;
    return GDC(b,a%b);
}

int main(void) {
    long int T, A, B, GCD, LCM;
    scanf("%ld",&T);
    for(int i=1; i<=T; i++){
        scanf("%ld %ld",&A,&B);
        GCD = GDC(A,B);
        LCM = (A/GCD)*B;
        printf("%ld %ld\n",GCD,LCM);
    }
    return 0;
}