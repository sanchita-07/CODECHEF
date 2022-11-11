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
        string s;
            cin>>s;
        int count = 0;
        for(int i=0; i<n/2; i++){
            if(s[i]!=s[n-1-i]){
                count++;   
            }
        }
        float c = (float)count/2;
        cout<<ceil(c)<<"\n";
    }
    return 0;
}