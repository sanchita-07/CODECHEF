#include<bits/stdc++.h>

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
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int k;
        for(int i=0; i<n; i++){
            if(a[i]!=0){
                k = i;
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}

  // int c = *max_element(a,a+n);
 // auto itr = find(a,a+n,c);
        // cout<<distance(a,itr)<<"\n";