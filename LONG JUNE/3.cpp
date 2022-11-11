#include <iostream>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if((a%3==1 && b%3==0) || (a%3==2 && b%3==1) || (a%3==0 && b%3==2))
         cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;
    }
    return 0;
}