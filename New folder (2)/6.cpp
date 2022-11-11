#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(a[0]%2==0 && a[i+1]%2==0)
            count++;
            else if(a[0]%2!=0 && a[i+1]%2!=0)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}