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
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if((c==a || c==b) && (d==a || d==b))
        cout<<"1"<<"\n";
        else if((e==a || e==b) && (f==a || f==b))
        cout<<"2"<<"\n";
        else
        cout<<"0"<<"\n";
    }
    return 0;
}