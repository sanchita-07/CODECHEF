#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n;
        m = n;
        for(int i=2; i<=n; i++){
        if(n && (n-1)==0){
            count++;
        }
        }
        cout<<m-count<<endl;
    }
}