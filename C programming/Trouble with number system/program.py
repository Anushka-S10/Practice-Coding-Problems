n=int(input())
sum1=0
c=1
for i in range(n):
    m=int(input())
    while(m%10==0):
        sum1+=1
        m//=10
    c*=m
print(str(c)+"0"*sum1)