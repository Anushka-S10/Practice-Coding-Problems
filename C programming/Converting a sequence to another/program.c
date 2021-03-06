#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int x,int y)
{
    if(x<y)return x;
    else return y;
}
int main() {
    int n; scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    
    int m; scanf("%d",&m);
    int b[m+1];
    for(int i=1;i<=m;i++)scanf("%d",&b[i]);
    
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)dp[i][j]=j;
            else if(j==0)dp[i][j]=i;
            else if(a[i]==b[j])dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
//            printf("%d ",dp[i][j]);
        }
//        printf("\n");
    }
    printf("%d",dp[n][m]);
    return 0;
}
