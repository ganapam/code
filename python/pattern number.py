""" n=int(input("enter"))
for i in range(n):
    for j in range(1,i+1):
        print(j,end=" ")
    print() """
"""a=int(input("enter"))
for i in range(a):
    for j in range(i,a-1):
        print(j,end=" ")
    for k in range(j*2):
        print(" ",end=" ")
    print()"""
"""for i in range(5):
    for j in range(5):
        print(j,end=" ")
    print()"""
"""n=int(input("enter"))
for i in range(n+1):
    for j in range(1,i+1):
        print(j,end=" ")
    print()"""
"""a=int(input("enter"))
for i in range(a):
    for j in range(1,a-1):
        print(" ",end=" ")
    for k in range(1,i+1):
        print(k,end=" ")
    print()"""
"""n=int(input("enter"))
for i in range(n):
    for j in range(n-i-1):
        print(" ",end=" ")
    for k in range(2*i+1):
        print(k+1,end=" ")
    print()"""
n=int(input("enter"))
for i in range(n):
    for j in range(i):
        print(" ",end=" ")
    for k in range(2*(n-i)-1):
        print(k+1,end=" ")
    print()

