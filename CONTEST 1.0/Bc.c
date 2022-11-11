#include <stdio.h>
#include <math.h>
int Sum(int n)
{
    int sum = 0;
    if(n == 1)
      return sum;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (i==(n/i))
                sum += i;
            else
                sum += (i + n/i);
        }
    }
    return (sum + 1);
}
int main() {
    int t,i,n;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    printf("%d",Sum(n));
    }
    return 0;
}