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
        ll a[n];
        for(ll i=0; i<n; i++)
        cin>>a[i];
        sort(a, a+n);
        ll max = *max_element(a,a+n);
        ll count = 1;
        for(ll i=0; i<n; i++){
            if(a[i]==a[i+1]){
                count++;
            }
            else
            count=1;
            if(count+a[i]>max){
                max = count + a[i];
            }
        }
        cout<<max-1<<endl;
    }
    return 0;
}