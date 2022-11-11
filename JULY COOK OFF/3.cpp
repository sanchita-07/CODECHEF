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
        int x;
        cin>>x;
        if(x%3==0)
        cout<<"0"<<"\n";
        else if(x%3==1)
        cout<<"2"<<"\n";
        else
        cout<<"1"<<"\n";
    }
    return 0;
}