#include <stdio.h>

int main()
{
    int a,b,c,d,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100 && d>=1 && d<=100){
        int q = (a<b && a<c && a<d ? a:(b<c && b<d ? b : (c<d ? c: d)));
        printf("%d\n",q);
        }
    }
    return 0;
}