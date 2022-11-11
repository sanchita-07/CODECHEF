#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,l,r,x;
        cin>>n;
        ll a[n];
        for(ll i=1; i<=n; i++){
        cin>>a[i];
        }
        cin>>q;
   
        for(ll i=1; i<=q; i++){
            cin>>l>>r>>x;
            ll count=0;
            for(ll j=l; j<=r; j++){
                if((a[j]^x) > (a[j]&x)){
                    count++;
                }
            }
            cout<<count<<endl;
        }

    }
    return 0;
}