# >>>>>>>>>>FRAME WIDGET IN TKINTER?>>>>>>>>>



import tkinter
from tkinter import*



# top=Tk()

# top.geometry('300x100')
# frame=Frame(top)
# frame.pack()

# leftframe=Frame(top)
# leftframe.pack(side=LEFT)

# rightframe=Frame(top)
# rightframe.pack(side=RIGHT)

# btn1=Button(rightframe,text="SUBMIT",fg="red",activebackground="red")
# btn1.pack(side=LEFT)
# btn2=Button(leftframe,text="Remove",fg="red",activebackground="magenta")
# btn2.pack(side=RIGHT)
# btn3=Button(rightframe,text="ADD",fg="BLACK",activebackground="YELLOW")
# btn3.pack(side=LEFT)

# btn4=Button(leftframe,text="Modify",fg="orange",activebackground="Blue")
# btn4.pack(side=RIGHT)

# def selection():
#        com ="You Selected the Option"+str(RadioButtonGroup.__getattribute__())

# top.geometry('300x150')
# radio=IntVar()
# lbl=Label(text='Your Favorite Programming Language')
# lbl.pack()

# r1=Radiobutton(top,text="C",variable=radio,value=1,command=selection)
# r1.pack(anchor=W)

# r2=Radiobutton(top,text="C++",variable=radio,value=2,command=selection)
# r2.pack(anchor=W)

# r3=Radiobutton(top,text="JAVA",variable=radio,value=3,command=selection)
# r3.pack(anchor=W)

# label=Label(top)
# label.pack()


# >>>>>>>>>>SCROLL BAR>>>>>>>>>>>>>>>>>


# sb=Scrollbar(top)
# sb.pack(side=RIGHT,fill=Y)

# mylist=Listbox(top,yscrollcommand=sb.set)

# for line  in range(30):
#     mylist.insert(END,"Number"+str(line))

# mylist.pack(side=LEFT)
# sb.config(command=mylist.yview)



# #>>>>>>>.Creating the another widget with the main window >>>>>>>>>>>>>>

top=Tk()

# root.geometry('82x80')
# def open():
#     top=Toplevel(root)
#     top.mainloop()
# btn=Button(root,text='Open',command=open)
# btn.place(x=75,y=52)

def add():
    a=int(e1.get())
    b=int(e2.get())
    leftdata=str(a+b)
    left.insert(1,leftdata)

w1=PanedWindow()
w1.pack(fill=BOTH,expand=1)

left=Entry(w1,bd=5)
w1.add(left)

w2=PanedWindow(w1,orient=VERTICAL)
w1.add(w2)

e1=(Entry)(w2)
e2=Entry(w2)

w2.add(e1)
w2.add(e2)

bottom=Button(w2,text='Add',command=add)
w2.add(bottom)



    





top.mainloop()






