#!/bin/python3
from tkinter import *

window = Tk()

window.title("Timer för calle")

lbl = Label(window, text="Hello", font=("Arial Bold", 50))

lbl.grid(column=0, row=0)
window.geometry('350x200')
btn = Button(window, text="Click Me")

btn.grid(column=0, row=1)
window.mainloop()