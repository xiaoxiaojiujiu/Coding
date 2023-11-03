n=11
lst=[1,2,3]
for i in range(3,n+1):
    lst.append(lst[i-3]+lst[i-2]+lst[i-1])
print(lst)