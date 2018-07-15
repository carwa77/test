	
# A basic GUI program using TK
# Created by David Briddock

from Tkinter import *
import tkMessageBox

# initialise main window
def init(win):
  win.title("Basic GUI Program")
  win.minsize(400, 150)
  btn.pack()
  btn2.pack()
  btn3.pack()
  btn4.pack()

# find button callback
def hello():
  tkMessageBox.showinfo("Hello", "The callback worked!")
def ja():
	tkMessageBox.showinfo("Avslut?!", "Yes you are!")
def nej():
	tkMessageBox.showinfo("What happend?", "Yes you are!")	
def bast():
	tkMessageBox.showinfo("Correct answer", "Jajamensann!!")	
# create top-level window object
win = Tk()

# create a widget
btn = Button(win, text="Hello", command=hello)
btn2= Button(win, text="Alva is best", command=ja)
btn3=Button(win, text="Alice is best", command=nej)
btn4=Button(win, text="Pappa is best", command=bast)

# initialise and start main loop
init(win)
mainloop()
