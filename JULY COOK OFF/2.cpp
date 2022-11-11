#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int  x, y, z;
        cin>>x>>y>>z;
        if(x<y)
        cout<<z<<"\n";
        else if(x%y==0)
        cout<<(x/y)*z<<"\n";
        else
        cout<<(x/y)*z+z<<"\n";
    }
    return 0;
}