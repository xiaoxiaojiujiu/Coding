i = int(input('输入任意数字:'))
n=0
while i != 1:
    if i%2==0:
        i=i/2
        print(int(i),end=" ")
        n+=1
    else:
        i=3*i+1
        print(int(i),end=" ")
        n+=1
