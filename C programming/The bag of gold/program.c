#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct bag
{
    double w,p,r;
};
int cmp(const void*a,const void*b)
{
    struct bag*x = (struct bag*)a,*y=(struct bag*)b;
    if(x->r < y->r)return 1;
    else if(x->r > y->r)return -1;
    else return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m; scanf("%d%d",&n,&m);
    struct bag a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf",&a[i].w,&a[i].p);
        a[i].r=a[i].p/a[i].w;
    }
    qsort(a,n,sizeof(struct bag),cmp);
    double p=0; int i=0;
    while(i<n && a[i].w<=m)
    {
        p+=a[i].p;
        m-=a[i].w;
        i++;
    }
    if(i<n && m>0){p+=(m*a[i].r);m=0;}
    if(m>0)printf("-1");
    else printf("%.12lf",p);
    return 0;
}
