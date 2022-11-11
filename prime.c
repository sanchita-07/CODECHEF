#include <stdio.h>
int prime(int n){
    int j=1, p=0;
     do {
     if(n%j==0)
        p++;
        j++;
    }
     while(j<=n);
        if(p==2)
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