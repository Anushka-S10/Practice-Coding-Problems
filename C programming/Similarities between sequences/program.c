#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    
    int m; scanf("%d",&m);
    int b[m+1];
    for(int i=1;i<=m;i++)scanf("%d",&b[i]);
    
    int dp[n+1][m+1],max=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)dp[i][j]=0;
            else if(a[i]==b[j])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=0;
            
            if(dp[i][j]>max)max=dp[i][j];
        }
    }
    printf("%d",max);
    return 0;
}
