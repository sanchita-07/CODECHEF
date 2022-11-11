#include <stdio.h>

int main()
{
    long long int t,i;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&i);
     if(i>=2)
    {
        if(i%4==0)
     printf("%lld\n",i+3);
     else if(i%2!=0 && (i-1)%4==0)
     printf("%lld\n",i);
     else
     printf("3\n");
    }
    }
    return 0;
}


























// #include <stdio.h>

// int main()
// {
//     long long int t,i;
//     scanf("%lld",&t);
//     while(t--){
//         scanf("%lld",&i);
//      if(i>=2)
//     {
//         if(i%4==0)
//      printf("%d\n",i+3);
//      else if(i%2!=0 && (i-1)%4==0)
//      printf("%d\n",i);
//      else
//      printf("3\n");
//     }
//     }
//     return 0;
// }


