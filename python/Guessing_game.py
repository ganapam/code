import datetime
import random
import time # SLEEP FOR SECONDS WAIT 
date=datetime.datetime.now()
print(date)
print("HI!", "WELCOME TO GUESSING GAME","PLAY AND ENOJAY THE GAME")
print("You have to wait game will start in 5seconds")
time.sleep(5)  # it takeing time to go next step
n=int(input("Enter number you have to guess between 1 to 100 :"))
time.sleep(1)
m=random.randint(1,100)
time.sleep(1)
count=1
while n != m:
    time.sleep(2)
    count+=1
    n=int(input("Your guess wrong think and try again  :"))
    if n<m:
        print(" you have to think high level  try  : ")
    else:
        print("its near to you try try try  :")
        time.sleep(5)
        
print("That's a right answer",m ,"ur guess good keep it up","And your count guess is",count )
