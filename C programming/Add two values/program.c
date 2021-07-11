#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float a,b;
    scanf("%f %f",&a,&b);
    long long int c=a+b;
    if(c<(a+b))
        printf("%.2f",a+b);
    else
        printf("%lld",c);
    return 0;
}
