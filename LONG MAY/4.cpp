#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,d;
        cin>>n>>x>>y;
        if(x>n/2)
        x=(n+1)-x;
        if(y>n/2)
        y=(n+1)-y;
        d = 2*(min(x,y)-1);
     cout<<3*(n-1)+d<<endl;
    }
    return 0;
}



//    ll count=0;
//         for(ll i=1; i<=n; i++){
//         if(x+i<=n && y+i<=n)
//         count++;
//         if(x-i>=1 && y+i<=n)
//         count++;
//         if(x+i<=n && y-i>=1)
//         count++;
//         if(x-i>=1 && y-i>=1)
//         count++;
//         }
//         cout<<2*(n-1)+count<<endl;