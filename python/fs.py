def fibonacci(n):
    a,b=0,1
    while a<n:
        print(a,end="")
        a,b=b,a+b
        print()
def main():
    n=int(input("enter"))
    fibonacci(n)
main()