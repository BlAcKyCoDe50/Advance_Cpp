# #Dictonary:-
# #synatx:- dic={1,2,"shdgif",1}
# #empty Dictonary
# dic={}
# print(dic)
from traceback import print_tb


dic={1: 'apple,',2: 'bananna' }
# print(dic)
# #dictonary with mixed keys:- 
# dic1={'name':'hack',1:[1,2,4]}
# #Using the Dictonaries:- 
# dic=dict({1:'apple',2:'banana'})
# #from sequence having each item as a pair
# dic=dict([(1,'apple'),(2,'bannana')])
# print(dic1[1]) #It will print the values in index in 1 in the dic1
# print(dic.get(1))  #it is the another built in function for accesing the elements of a dicotnaries

#changing and adding dictonary Elements
my_dic={'name':'jack','age':26,4:'pop'}
# #update the value
# my_dic['age']=27
# print(my_dic)

# #add item
# my_dic['address']= 'indore'
# print(my_dic)

#Removing elements from a Dictonary
print(my_dic.pop(4))
print(my_dic)
#remove an arbitary item,reuturn(key,vale)
print(my_dic.popitem())
print(my_dic)
#It will delete the elements of an dictonary
my_dic.clear()
print(my_dic)

#delete the whole dictonary
del my_dic
print(my_dic)
