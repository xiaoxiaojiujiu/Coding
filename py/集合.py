s1={1,2,3,4,5,6,7}
s2={1,2,3}
print(s1.issubset(s2))
print(s2.issubset(s1))
print(s1.issuperset(s2))
print(s2.issuperset(s1))
s3={4,5,6}
s4={1,2,3,4}
s5={4,5,6,7}
print(s2.isdisjoint(s3))
print(s4.isdisjoint(s5))

print(s2&s3)
print(s2.intersection(s3))
print(s2|s3)
print(s2.union(s3))
print(s1-s2)
print(s1.difference(s2))
print(s4^ s5)
print(s4.symmetric_difference(s5))