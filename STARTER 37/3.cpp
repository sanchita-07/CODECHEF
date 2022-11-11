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
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        sort(a,a+n);
        int count1 = 1, count2 = 1, max1 = INT_MIN,max2 = INT_MIN, arr1 = a[0], arr2 = a[0];
        for(int i=0; i<n; i++){
            if(a[i]==a[i+1])
            count1++;
            else
            count1=1;
            if(count1>max1){
                max1= count1;
                arr1 = a[i];
            }
      }
           for(int i=0; i<n; i++){
            if(a[i]==a[i+1])
            count2++;
            else
            count2=1;
            if(count2>max2 && a[i]!=arr1){
                max2= count2;
            }
        }
        if(max1==max2){
            cout<<"CONFUSED"<<endl;
        }
        else
        cout<<arr1<<endl;
    }
    return 0;
}