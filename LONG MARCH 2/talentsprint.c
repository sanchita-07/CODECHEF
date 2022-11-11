#include <stdio.h>

int sub_add(int num){
    int total = 0;
    int j;
    for(int j =num;j<num+1;j++){
        total+=j;
    }
    return total;
}
int add(int num){
    int res=0;
    int i;
    for(int i=1;i<num+1;i++){
        res+=sub_add(i);
    }
    return res;
}