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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count = 0;
        ll l = s.length();
        string st = "10";
        ll i = 0, j=0;
        ll p[2];
        while(i<l){
            if(st[j] == s[i]){
                j++;
                i++;
            }
            if(j==2){
                j = p[j-1];
                count++;
            }
            else if (i<l && st[j]!=s[i]){
                if(j!=0){
                    j = p[j-1];
                }
                else
                i++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}