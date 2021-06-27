#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i;
    scanf("%d",&n);
    long p=1, c=0, x;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&x);
        while(x%10==0)
        {
            c++;
            x/=10;
        }
        p = p*x;
    }
    printf("%ld",p);
    for(i=0;i<c;i++) printf("0");
    return 0;
}