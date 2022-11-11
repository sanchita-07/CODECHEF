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
        int n;
        cin>>n;
        int a[n];
        a[1] = ceil((float)n/2);
       for(int i=2; i<=n; i++){
        if(n&1)
        a[i] = a[i-1] + pow(-1,i+1)*(i-1);
        else
        a[i] = a[i-1] + pow(-1,i)*(i-1);
       }
       for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}