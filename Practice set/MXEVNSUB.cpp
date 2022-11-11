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
        int n;
        cin>>n;
        if(n%4==0 || (n+1)%4==0)
        cout<<n<<"\n";
        else
        cout<<n-1<<"\n";
    }
    return 0;
}