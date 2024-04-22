from turtle import *
import easyinput
import tkinter as tk

def dibuixarfractal(x, y, d, n):
    if n != 0:
        up()
        goto(x, y - d)
        down()
        circle(d)
        dibuixarfractal(x+3*d/4, y - 3*d/4, d/2, n)
        dibuixarfractal(-x -3*d/4, y - 3*d/4, d/2, n)
        dibuixarfractal(x, y - 3*d/4, d/2, n)
        dibuixarfractal(x, y +d, d/2, n)

for line in sys.stdin:
    for n in line.split():
for line in sys.stdin:
    for d in line.split():
n = int(n)
d = int (d)

dibuixarfractal(0,0,d, n)
