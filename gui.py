


import tkinter
from tkinter import Toplevel,Button,Tk,Menu
from tkinter import messagebox

from tkinter import*

# top=Tk()

# l1=Label(top,text="ID",fg='white',bg='black')
# l1.l1=grid(row=0,column=0)
# t1=Entry(top)
# t1.grid(row=0,column=1)
# l2=Label(top,text="PASSWORD",fg='white',bg='VIOLET')
# l2.grid(row=1,column=0)
# t2=Entry(top)
# t2.grid(row=1,column=1)
# l3=Label(top,text="LOGIN",fg='white',bg='ORANGE')
# l3.grid(row=3,column=0)
# tp=Tk()
# def msg():
#     messagebox.showinfo("ALERT!!!!","You are exiting......")
# top.title("CHALA JA ")
# bt=Button(top,text='CLICK',activeforeground='YELLOW',activebackground="RED",command=msg)
# bt.pack()
# # l1.place(x=10,y=10)
# # t1=Entry(top)
# # t1.place(x=30,y=10)




# bt2=Button(top,text="CLICK",fg="white",bg='BLUE')
# bt2.pack(side=LEFT)
# bt3=Button(top,text="CLICK",fg="white",bg='PINK')
# bt3.pack(side=BOTTOM)
# bt4=Button(top,text="CLICK",fg="white",bg='RED')
# bt4.pack(side=RIGHT)

#message box 


#Color changing button



# Q1>>>Write the program combination of all commands?

# def msg():
#     messagebox.showinfo("ALERT!!!!","Submitted Successfully!!")

# top.title('message')
# l1=Label(top,text="ID",fg='white',bg='black')
# l1.grid(row=0,column=0)
# t1=Entry(top)
# t1.grid(row=0,column=1)
# l2=Label(top,text="PASSWORD",fg='white',bg='VIOLET')
# l2.grid(row=1,column=0)
# t2=Entry(top)
# t2.grid(row=1,column=1)
# l3=Label(top,text="LOGIN",fg='white',bg='ORANGE')
# l3.grid(row=3,column=0)

# top.title("mes")
# bt=Button(top,text='SUBMIT',activeforeground='YELLOW',activebackground='red',command=msg)
# # bt=Button(top,text='CLICK',activeforeground='YELLOW',activebackground="RED",command=msg)
# bt.pack()
# top.mainloop()


# CANVAS:-  draw  graphs/Pie charts/Shapes->arc,circle.
top=Tk()
top.geometry("400x200")
# creating a simple Canvas
c=Canvas(top,bg="blue",height="400")
c.pack()

c.create_arc((10,20,90,360),start=0,extent=150,fill="Yellow")

# <<<<<<<<<<<<<<<<<<<<<Check Buttons>>>>>>>>>>>>>>>>>>>>>>>
# top.geometry("200x200")
checkvar1=IntVar()
checkvar2=IntVar()
checkvar3=IntVar()

chkbtn1=Checkbutton(top,text="C Language",variable=checkvar1,onvalue=1,offvalue=0,height=2,width=10)
chkbtn2=Checkbutton(top,text="C++ Language ",variable=checkvar2,onvalue=1,offvalue=1,height=2,width=10)
chkbtn3=Checkbutton(top,text="Python Language",variable=checkvar3,onvalue=1,offvalue=0,height=4,width=10)
# =chkbtnCheckbutton(top,text="C Language",variable=checkvar1,onvalue=1,offvalue=0,height=2,width=10)
chkbtn1.pack()
chkbtn2.pack()
chkbtn3.pack()

# <<<<<<<<<<<<<Scrolling>>>>>>>>>>>>>>>>>>>>>>

label=Label(top,text="A List of the Best Countries in the World......")
listbox=Listbox(top)
listbox.insert(1,"1>China")
listbox.insert(2,"2>Russia")
listbox.insert(3,"3>Japan")
listbox.insert(4,"4>Afganistan")
listbox.insert(5,"5>Sri Lanka")
label.pack()
listbox.pack()
#>>>>>>this button will delete the selected item from the list///
btn=Button(top,text="DELETE",command=lambda listbox=listbox:listbox.delete(ANCHOR))
btn.pack()

#>>>>>>>MENU BAR>>>>>>>>>>>>>

def hello():
    print("HELLO CHUTIYO")
#create a Top Level Menu

menubar=Menu(top)
# menubar=Menu(top)
menubar.add_command(label="HELLO CHUTIYO! ",command=hello)
menubar.add_command(label="Quit! ",command=top.destroy)

#>>>>>>>>>>>DISPLAY THE MENU>>>>>>>>>>.
top.config(menu=menubar)

# >>>>>>>>CREATING THE MENU >>>>>>>>>>>>>>>>



top=Tk()

def info():
    print("This Program is Developed by Vishvajeet Singh")


menubar=Menu(top)
file=Menu(menubar,tearoff=0)
file.add_command(label="New")
file.add_command(label="Open")
file.add_command(label="Save")
file.add_command(label="Save as")
file.add_command(label="Close")
file.add_command(label="Info About Developer")

file.add_command(label="Exit",command=top.destroy)
file.add_separator()
file.add_command(label="Info About Developer",command=info)






menubar.add_cascade(label="FILE",menu=file)
top.config(menu=menubar)  


# >>>>>>>>>>EDIT MENU>>>>>>>>>>>

edit=Menu(menubar,tearoff=1)
edit.add_command(label="Undo")
edit.add_command(label="Cut")
edit.add_command(label="Copy")
edit.add_command(label="Paste")
edit.add_command(label="Delete")
edit.add_command(label="Select all")

edit.add_separator()

menubar.add_cascade(label="Edit",menu=edit)

help=Menu(menubar,tearoff=2)
help.add_command(label="About")

menubar.add_cascade(label="Help",menu=help)

top.config(menu=menubar)







top.mainloop()








