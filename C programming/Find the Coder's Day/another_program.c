#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int y; scanf("%d",&y);
    if(y>=1700 && y<=1917)
    {
        if(y%4==0)printf("12.09.%d",y);
        else printf("13.09.%d",y);
    }
    else if(y>=1919)
    {
        if(y%400==0 ||(y%4==0 && y%100!=0))printf("12.09.%d",y);
        else printf("13.09.%d",y);
    }
    else printf("26.09.1918");
    return 0;
}

