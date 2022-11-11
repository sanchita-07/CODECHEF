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
        long int n;
        cin>>n;
        long int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        sort(a,a+n);
        long int count=0;
        for(int i=1; i<n-1; i++){
            if((3*a[i]==2*a[i-1]+a[i+1]) || (3*a[i]==2*a[i+1]+a[i-1]))
            count++;
           
        }
        
        // long int count1=0;
        // sort(a,a+n,greater<int>());
        //   for(int i=1; i<n-1; i++){
        //     if((3*a[i]==2*a[i-1]+a[i+1]) || (3*a[i]==2*a[i+1]+a[i-1]))
        //     count1++;
           
        // }
        if(count==n-2)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}