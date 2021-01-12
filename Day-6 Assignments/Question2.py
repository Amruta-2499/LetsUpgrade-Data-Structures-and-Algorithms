
n=int(input())
a = list(map(int,input("").strip().split()))[:n] 
ans=a[0]

for i in range(1,len(a)):
    ans*=a[i]

print(ans)
    