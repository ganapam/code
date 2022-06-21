# simple caluclator program

print("Please select the type of operation you want to perform:");
print("1  ->   Addition");
print("2  ->   Subtraction");
print("3  ->   Multiplication");
print("4  ->   Division");
print("5  ->   Raising a power to number");


x = int(input("Enter first number: "));   #-> taking first inpu

y = int(input("Enter second number: "));  #-> taking second input

n = input("Enter choice: ");               # empty input

if n == '1':
   print(x, "+" ,y, "=",(x+y));

elif n == '2':
   print(x, "-", y, "=", (x-y));

elif n == '3':
   print(x, "*", y, "=", (x*y));

elif n == '4':
   print(x, "/", y, "=",(x/y));

elif n == '5':
   print(x, "**", y, "=", (x**y));

else:
   print("Please select a valid input.");
