#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0;
    while (i<n-1)
    {
        if(a[i]<a[i+1])
            i++;
        else 
            break;
    }
   while (i<n-1)
   {
       if(a[i]==a[i+1])
           i++;
       else 
           break;
   }
   while (i<n-1)
   {
       if(a[i]>a[i+1])
           i++;
       else 
           break;   
   }
    if(i==n-1)
        printf("yes");
    else 
        printf("no");
    return 0;
}
