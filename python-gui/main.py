import tkinter as tk

def on_click():
    label.config(text="button clicked!")

root = tk.Tk()
root.title("My app")

label = tk.Label(root, text="Hello World!")

button = tk.Button(root, text="Click Me", command=on_click)

button.pack()

root.mainloop()