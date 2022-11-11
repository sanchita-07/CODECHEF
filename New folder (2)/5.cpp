#include <bits/stdc++.h>
using namespace std;

long int arr(long int a[],long int n){
    long int sum = 0;
    return accumulate(a, a+n, sum);
}

int main(){
   long int t;
    cin>>t;
    while(t--){
        long int n,x;
        cin>>n>>x;
        long int a[n];
        for(long int i=0; i<n; i++){
            cin>>a[i];
        }
        long int sum, min;
        sum = arr(a,n);
        min = *min_element(a,a+n);
        if(sum >=x)
        cout<<n<<endl;
        else if(sum<x)
        cout<<x/min<<endl;
    }
    return 0;
}