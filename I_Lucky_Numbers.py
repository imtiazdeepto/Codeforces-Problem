n=int(input())
x=n%10
y=int(n/10)
if(x%y==0 or y%x==0):
    print("YES")
else:
    print("NO")