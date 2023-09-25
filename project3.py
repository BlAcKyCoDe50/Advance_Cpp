import tkinter
from tkinter import*
from tkinter import messagebox
top=Tk()

def Welcome():
    messagebox.showinfo("WELOCME TO HANGMAN.....")

top.title("WELCOME")
bt=bt=Button(top,text='CLICK',activeforeground='YELLOW',activebackground="RED",command=Welcome)
bt.pack()
top.mainloop()
