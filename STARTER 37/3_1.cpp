#include<bits/stdc++.h>

#define ll long long

using namespace std;

int hsh[11];

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
     for(int i=0; i<n; i++){
         cin>>a[i];
         hsh[a[i]]++;
     }  
     int h, m = -1,count = 0 ,l;
     for(int i=1; i<11; i++){
         h = hsh[i];
         m = max(h,m);
     }
     for(int i=1; i<11; i++){
         h = hsh[i];
         if(m==h){
             count++;
         }
         if(m == hsh[i]){
             l = i;
         }
     } 
    if(count>1)
    cout<<"CONFUSED"<<endl;
    else
    cout<<l<<endl;

    }
    return 0;
}