#include <stdio.h>

int main()
{
    int s,t,a[100],b[100],n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a[n]);
    }
    scanf("%d",&s);
    while(s--){
        scanf("%d",&b[m]);
    }
    for(int i =0; i<t; i++){
        for(int j=0; j<s; j++){
        if(a[i]==b[j]){
            printf("%d",a[i]);
        }
        }
    }
 return 0;   
}