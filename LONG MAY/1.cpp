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
        int x,y;
        cin>>x>>y;
          if(x==y && x!=0)
              cout<<"YES"<<endl;   
          else
          cout<<"NO"<<endl;
    }
    return 0;
}