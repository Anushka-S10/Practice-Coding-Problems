#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d",&n);
    int rank[n],c[n+1],res[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&rank[i]);
        c[i+1]=0;
    }
    for(int i=n-1;i>=0;i--)
    {
        int k=rank[i],x=0;
        for(int j=1;j<=n;j++)
        {
            if(c[j]==0)
            {
                if(k==x){res[i]=j;c[j]=1;break;}
                x++;
            }
        }
    }
    for(int i=0;i<n;i++)printf("%d ",res[i]);
    return 0;
}
