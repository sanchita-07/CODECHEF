#include <stdio.h>

int main()
{
    int t,s;
    scanf("%d",&t);
    while(t--){
        scanf("%c",&s);
        if(s=='b'|| s=='B')
        printf("BattleShip");
        if(s=='c'|| s=='C')
        printf("Cruiser");
        if(s=='d'|| s=='D')
        printf("Destroyer");
        if(s=='f'|| s=='F')
        printf("Frigate");
    }
    return 0;
}