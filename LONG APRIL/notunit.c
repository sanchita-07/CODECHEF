#include <stdio.h>
#include <stdlib.h>
int main()
{
   long int t,a,b,i,j;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld %ld",&a,&b);
        for(i=a; i<=b; ){
            if((a==1 && b==3) || abs(a-b)==1 || a%2!=0 && abs(a-b)==2){
            printf("-1\n");
            break;
            }
            else if(i%2==0){
            printf("%ld %ld\n",i,i+2);
            break;
            }
            else if(i%3==0){
            printf("%ld %ld\n",i,i+3);
            break;
            }
            else
            i++;
        }
    }
    return 0;
}










        // if(i>=a && i<=b && j>=a && j<=b){
        //     if(i%j){
        //     printf("%d %d",i,j);
        //     }
        // }