#include <stdio.h>
int prime(int n){
    int p=0;
    for(int j=2; j<=n; j++){
     if(n%j==0)
        p++;
    }
        if(p==1)
        printf("yes\n");
        else 
        printf("no\n");
        return p;
}
int main()
{
    int T, n, i;
    scanf("%d",&T);
        for(i = 1; i<=T; i++){
        scanf("%d",&n);
        prime(n);
    }
    return 0;
}