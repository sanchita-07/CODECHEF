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
        string a,b;
        cin>>a>>b;
        for(int i=0; i<a.length(); i++){
            if(a[i]!=b[i]){
                count++;
            }
        }
    }
    return 0;
}