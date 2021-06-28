t = int(input())
for i in range(t):
    l=list(map(int,input().split()))
    c = 0;
    while l[1]<l[3]:
        c=c+l[0]+l[1]
        l[3]=l[3]-l[1]+l[0]
    c=c+l[3]
    print(c*l[2])