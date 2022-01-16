n=int(input("enter"))
n1,n2=0,1
count=0
if n<=0:
    print("enter postive number")
elif n ==1:
    print("fibnoic sequence up to",n,".")
    print(n1)
else:
    print("fs")
    while count<n:
        print(n1)
        m=n1+n2
        n1=n2
        n2=m
        count+=1