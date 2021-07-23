#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            b[i][j]=a[n-j-1][i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
