#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(char *a,char *b)
{
    return *a-*b;
}
int main() {
    int n;
    scanf("%d",&n);
    char ch[n][1002],res[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
        char m=ch[i][0];
        for(int j=1;ch[i][j];j++)
            if(ch[i][j]<m)m=ch[i][j];
        res[i]=m;
    } 
    qsort(res,n,sizeof(char),cmp);
    printf("%s",res);
    return 0;
}
