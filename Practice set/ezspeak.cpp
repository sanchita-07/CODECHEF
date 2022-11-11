#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count = 0;
	    for(int i=0; i<n; i++){
	    if(s[i] != 'a' && s[i] != 'e' && s[i] !='i' && s[i] != 'o' && s[i]!= 'u'){
	        count++;
	    }
	    else
	    count = 1;
        cout<<count<<" "<<s[i]<<" ";
	    }
	    count>4 ? cout<<"NO\n" : cout<< "YES\n";
	}
	return 0;
}
