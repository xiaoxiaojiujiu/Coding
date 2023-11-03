sum=0
a=int(input('始于：'))
b=int(input('终于：'))
c=int(input('步长：'))
for i in range(a,b+1,c):
    sum+=i
print('和为'+str(sum))