#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1005][1005],n,state;
int get(int x,int y)
{
    if(state==0) return a[x][y];
    if(state==1) return a[y][n-x+1];
    if(state==2) return a[n-x+1][n-y+1];
    return a[n-y+1][x];
}

int main() {
     typedef long long ll;  
     char c;
     cin>>n;
     for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    while(1)
    {
        cin>>c;
        if(c=='-') break;
        if(c=='Q')
        {
            int x,y;
            cin>>x>>y;
            cout<<get(x,y)<<endl;
        }
        else if(c=='A')
        {
            int d;
            cin>>d;
            d/=90;
            state=(state-d)%4;
            if(state<0) state+=4;
        }
        else
        {
           int x,y,z;
            cin>>x>>y>>z;
            a[x][y]=z;
        }
    }
    return 0;
}
