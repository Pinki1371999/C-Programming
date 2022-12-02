import numpy
arr=numpy.array([])

for i in range(11):
    a=int(input("enter number"))
    arr=numpy.insert(arr,0,a)
print(arr)
