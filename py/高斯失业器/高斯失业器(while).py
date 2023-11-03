sum=0
a=int(input('始于：'))
b=int(input('终于：'))
c=int(input('步长：'))
while a<=b:
    sum+=a
    a+=c
print('和为'+str(sum))