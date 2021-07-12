#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i;
    scanf("%d",&n);
    int a[n]; 
    int p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&p[i]);
    }
    i=0;    
    while(i<n-1)    
    {        
        if(p[i]<p[i+1])        
        {            
            p[i+1]=p[i];        
        }        
        i++;    
    }    
    int tot=0;    
    for(i=0;i<n;i++)    
    {     
        tot=tot+a[i]*p[i];       
    }
    printf("%d",tot);
    return 0;
}
