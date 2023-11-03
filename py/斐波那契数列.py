import math
import sys
sys.set_int_max_str_digits(0)
a=int(input('想求第几位数字：'))
b=[1,1]
for i in range(2,a):
    b.append(b[i-2]+b[i-1])
print(b[a-1])