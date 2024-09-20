#Create a Class



# class Name-class:
#     .----Attributes
#         Objects

#EXAMPLE:-1



# class myclass:
#     x=5
# p1=myclass() #<<<<----creating an object
# print(p1.x) #<<<<----Accessing the attribute

#EXAMPLE:-2
# Simple class and Attribute
# class clas:
#     attr1='this is attr1'
#     attr2='this is attr2 '


# a=clas()
# print(a.attr1)
# print(a.attr2)
#EXAMPLE:-3

# class person:
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age

# person1=person("john",1000) 
# print(person1.name)


# EXAMPLE:3
# Insert a function that prints a greeting,and execute it on the p1 object?




# class People:
#     def __init__(call,name,age) : #<<<we can change the first parameter default it is self
#         call.name=name
#         call.age=age

#     def myfunc(call):
#         print("Hello my name is"+call.name)

# person1=People("\nJhonny Sins",100)
# person1.myfunc()
# person1.age=800
# print("I made totally  " + str(person1.age) +" videos" )
# del person1


# class dog:
#     #Class Variable
#     animal='dog'

# #The init method or constructor
# def __init__(self,breed,color):
#     self.breed=breed
#     self.color=color
# #Objects of Dog Class
# Rodger=dog('pug','brown')
# buzo=dog("bulldog",'black')

# print('Rodger details:- ')    
# print("Rodger is a",Rodger.animal)
# print("breed",Rodger.breed)
# print("color",Rodger.color)
    

# class dog:
#     animal='dog'
#     def __init__(self,breed) :
#         self.breed=breed
#     def setcolor(self,color):
#         self.color=color
#     def getcolor(self):
#         return self.color

# rodger=dog('pig')
# rodger.setcolor('brown')
# print(rodger.getcolor())

num1=float(input())
num2=int(input())
print("p:",num1)
print("q:",num2)
product=num1*num2
print("p=",+num1,"q=",+num2,"product",+product)


