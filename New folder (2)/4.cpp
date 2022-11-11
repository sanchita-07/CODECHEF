#include <iostream>

using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
       long int n,k;
        cin>>n>>k;
        if(k==0 && n%4==0)
        cout<<"Off"<<endl;
        else if(k==0 && n%4!=0)
        cout<<"On"<<endl;
        else if(k==1 && n%4==0)
        cout<<"On"<<endl;
        else
        cout<<"Ambiguous"<<endl;
    }
    return 0;
}