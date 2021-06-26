#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}