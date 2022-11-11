#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
         for(int i=n; n!=0;){
            int num;
            num = n%10;
            sum = sum*10 + num;
            n/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}