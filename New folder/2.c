#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s1[100], s2[100];
    while(t--){
        fgets(s1,100,stdin);
        fgets(s2,100,stdin);
        int n = strlen(s1);
       int max=0,min=0;
        for(int i=0; i<n ; i++){
            if(s1[i]=='?' || s2[i]=='?'){
                max+=1;
            }
            else if (s1[i]!=s2[i])
            {
                max+=1;
                min+=1;
            }
        }
        printf("%d %d\n",min,max);
    }
    return 0;
}