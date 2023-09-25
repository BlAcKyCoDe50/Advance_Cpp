
# Q1 

# class car:
#     def __init__(self,name,color,price):
#         self.name=name
#         self.color=color
#         self.price=price

# car1=car('BMW','Black',4800000)
# car2=car('Mustang','Blue',10000000)
# print('details of CAR1:- ',car1.name)
# print('color is ' ,car1.color)
# print('Price is only:- ',car1.price)
# print("#<<<<<<<<<>>>>>>>>>>>>>>>")
# print("\nDetails of the Car 2  are as Follows:- ")
# print('Name of the Car',car2.name)
# print("Color of the car",car2.color)
# print("Price of the Car:-",car2.price)

# <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<INHERITANCE>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

# INHERITANCE....

# class Animal:
#     def speak(self):
#         print("Animal Speaking")
# #child class Dog inherits the base class Animal
# class Dog(Animal):
#     def bark(self):
#         print('dog Barking')
# d=Dog()
# d.bark()
# d.speak()

# <<<<<<<<<<<>>>>>>>>>>>>>>>>>
# TYPES OF INHERITANCE
# 1.Multilevel Inheritance


# class class1:
#     <class-suite>
# class class2(class1):
#     <class suite>
# class class3(class2):
#     <class suite>

# class Animal:
#     def speak(self):
#         print("Animal speaking!!")
#  #child class Dog inherits the base class Animal
# class dog(Animal):
#     def bark(Self):
#         print("Dog barking")
# #the child class Dogchild inherits another child class Dog
# class dogchild(dog):
#     def eat(self):
#         print('Eating bread')

# d=dogchild()
# d.bark()
# d.speak()
# d.eat()

#<<<<<<<<<MULTIPLE INHERITANCE>>>>>>>>>>>>>>>>>>

# from multiprocessing.connection import deliver_challenge


# class calculation1:
#     def summation(Self,a,b):
#         return a+b

# class calculation2:
#     def multiplication(sellf,a,b):
#         return a*b

# class derived(calculation1,calculation2):
#     def divide(self,a,b):
#         return a/b

# d= derived()
# a=int(input("Enter the number 1:- "))
# b=int(input("Enter the number 2:-"))
# print(d.summation(a,b))
# print(d.multiplication(a,b))
# print(d.divide(a,b))

# #The issubclass(sub,sup)method
# print(issubclass(derived,calculation2))
# print(issubclass,(calculation1,calculation2))

# #The isinstance (0bj,class) method

# print(isinstance(d,derived))

#Create a class building having properties like name,area? Create another class Apartment inheriting the properties 
#building.Also,create 2 instance of it...!.!.!.!.!

# class building:
#     def info(self,name,area):
        




