#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
int isprime(int n)
{
    if(n==1)return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n; scanf("%d",&n);
    int c=0, sum=2,next=3;
    while(sum<=n)
    {
        if(isprime(next))
        {
            sum+=next;
            if(sum<=n && isprime(sum))c++;
        }
        next++;
    }
    printf("%d",c);
    return 0;
}
