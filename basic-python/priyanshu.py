import random

items=[1,2,3,4,5,6]
com=random.choice(items)
print(com)
print(">>>>>>>>>>>WELCOME TO DICE ROLLING GAME>>>>>>>>>>>>>>")
name=input("Enter your Name:- ")
print("Hello!!!",name)


score=0

for i in range(1,1000):
    user=int(input("Enter Your Choice:- "))
    print("Your Choice is",user)
    if user>6:
        print("Enter Valid input!!!!")
        print("Exiting....!!1*&&&")
        break
        
        


    if user==com:
        print("YOU WIN :)")
        score=+1
        print("Your score: ",score)
    else:
        print("You Loose:(")
        print("Computer Chooses:",com)
        print("Better Luck Next Time!!")
        print("Your score: ",score)

        
    print("for Continue Press Enter...")
    ext=input("For Exit press E:-")
    
    if ext=='E':
        print("Enter Valid Input....!!!1")
        
        print("EXITING.........!!!?*% ")
        break
        
        
    # else:
        


print("Your Score: ",score)








    
