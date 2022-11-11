#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        cin>>a[i];
        sort(a,a+n);
        ll count=1;
        ll p;
        for(ll i=0;i<n; i++){
            if(a[i]==a[i+1]){
                count++;
            }
            else{
             p = count;
            if(p==a[i]){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
            count = 1;
            }
        }
 
    }
    return 0;
}


    //   pair<ll,ll>p;
    //   if(p.first==p.second)
    //   cout<<"YES"<<"\n";
    //   else
    //   cout<<"NO"<<"\n"; 