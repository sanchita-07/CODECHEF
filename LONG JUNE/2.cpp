#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n%6){
            cout<<((n/6)+1)*x<<endl;
        }
        else
        cout<<(n/6)*x<<endl;
    }
    return 0;
}