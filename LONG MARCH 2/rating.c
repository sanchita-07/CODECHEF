#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int s,x,y;
        scanf("%d",&s);
        if(s>=0){
            y = -1;
            x = s + 1;
        }
        else {
            y = 1;
            x = s - 1;
        }
        printf("%d\n",x*y);
    }


    return 0;
}


    // int t;
    // scanf("%d",&t);
    // while(t--){
    //     int s,x,y,p;
    //     scanf("%d",&s);
    //     if(s==0)
    //     printf("-1\n");
    //     else{
    //      y = -s;
    //      x = 2*s;
    //      p = x*y;
    //      printf("%d\n",p);
    //     }
    // }