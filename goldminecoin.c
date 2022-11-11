#include <stdio.h>
void main()
{
    int T, N, j=0, sum;
    scanf("%d",&T);
    for (int i=1; i<=T; i++){
        scanf("%d",&N);
        do{
        j++;
        sum = j*(j+1)/2;
        }
        while(sum<=N);
        printf("%d",j-1);
    }
}