#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        char s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
	    char k = s[n-1];
        sort(s,s+(n-1));
	    if(binary_search(s,s+(n-1),k))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;	    
	}
	return 0;
}
