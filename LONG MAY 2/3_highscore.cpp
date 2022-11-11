#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[4];
        for(int i=0; i<4; i++){
            cin>>a[i];
        }
        cout<<*max_element(a,a+4)<<"\n";
    }
    return 0;
}