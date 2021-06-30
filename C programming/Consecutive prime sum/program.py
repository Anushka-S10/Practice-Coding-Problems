import math
def prime(n):
    if(n==1):
        return 0
    for i in range(2,int(math.sqrt(n))+1):
        if(n%i==0):
            return 0
    return 1
n=int(input())
c=0
sum=2
next=3
while(sum<=n):
    if(prime(next)==1):
        sum+=next
        if(sum<=n and prime(sum)==1):
            c+=1
    next+=2
print(c)