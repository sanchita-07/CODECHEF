//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
#include<stdio.h>

int main()
{
	int n,k,ans=0,i;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
