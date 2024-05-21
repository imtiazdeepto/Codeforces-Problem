#https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#imtiaz deepto
array_size = int(input())  
array_elements = input().split() 
arr=[] 
for x in array_elements:
    arr.append(int(x))
arr.sort()

for i in range(array_size):
    print(arr[i],end=' ')
