#include<bits/stdc++.h>

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int k = n-1;
       for(int i=1; i<=n; i++){
        cout<<k<<" ";
        a[k]= i;
        k-=2;
        if(k<=0){
            break;
        }
       }
        for(int i=1; i<=n; i++){
        cout<<k<<" ";
        a[k]= i;
        if(k<=0){
        k = abs(k)+1;
        k+=2;
        }
       }
       for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
       }
       cout<<"\n";

    }
    return 0;
}