a=int(input(" enter a number"))
for i in range(a):
    for j in range(a):
        if i==0 or i==-1 or j==0 or j==a-1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()