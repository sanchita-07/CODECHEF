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
        ll a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        ll sum1 =0;
        ll sum2 = 0;
        for(int i=0; i<n ;i++){
            if(a[i]>500){
                sum1+= a[i];
            }
            else if(a[i]==500){
                
            }
            else
            sum2+=(1000-a[i]);
        }
        cout<<sum1*sum2<<"\n";
    }
    return 0;
}