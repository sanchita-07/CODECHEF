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
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        // single
        int count = 0;
        for(int i=0; i<n; i++){
           int dif = a[i]; 
            do{
            dif -= x;
            count++;
            }
            while (dif>0);
            
         }
        //  multi
       int arr = *max_element(a,a+n);
    cout<<min(count,arr)<<endl;
        
    }
    return 0;
}