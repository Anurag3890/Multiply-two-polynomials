n1=int(input())
a=list(map(int,input().split()))
n2=int(input())
b=list(map(int,input().split()))
n=n1+n2
c=[0]*(n+1)
for i in range(n1+1):
    for j in range(n2+1):
        c[i+j]+=a[i]*b[j]
print(" ".join(map(str,c[::-1])))