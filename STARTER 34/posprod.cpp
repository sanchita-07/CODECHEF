#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,positive=0,negative=0,sum=0;
	    cin>>n;
	    std::vector<int>a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>0)
	        positive++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0)
	        negative++;
	    }
	    int p=(positive*(positive-1))/2;
	    int u=(negative*(negative-1))/2;
	    sum=p+u;
	    std::cout << sum << std::endl;
	}
	return 0;
}