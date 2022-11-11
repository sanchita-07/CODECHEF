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
        int n, m, x;
        cin>>n>>m>>x;
        if(m==x)
        cout<<0<<endl;
        else
        cout<<(x*n)/(x+1)<<endl;

    }
    return 0;
}