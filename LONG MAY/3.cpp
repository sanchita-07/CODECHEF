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
        ll int n;
        cin>>n;
        ll total = 50 * n;
        ll sugarcane = 0.2 * total;
        ll sm = 0.2 * total;
        ll rent = 0.3 * total;
        ll profit = total - (sugarcane+sm+rent);
        cout<<profit<<endl;
    }
    return 0;
}