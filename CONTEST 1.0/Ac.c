#include <stdio.h>

int main()
{
    int a[50],n,s,i;
    scanf("%d",&s);
    scanf("%d",&n);
    for(i=0; i<s; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<s; i++){
        if(a[i]==n){
        printf("YES");
        break;
        }
    }
    if(i==s){
        printf("NO");
    }
    return 0;
}