#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    long sum = 0;
    for(int i=0;i<n;i++) sum=sum+a[i]*b[i];
    printf("%ld",sum);
    return 0;
}
