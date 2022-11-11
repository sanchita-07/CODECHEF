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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int count1 =0, count2 = 0;
        for(int i=0; i<n; i++){
            if(a[i]==1)
            count1++;
            else
            count2++;
        }
        if(count1<count2)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}