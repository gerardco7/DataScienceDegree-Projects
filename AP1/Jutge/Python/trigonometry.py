from easyinput import read
from math import radians, sin, cos

x = read(float)

while x == x:
    a = sin(radians(x))
    b = cos(radians(x))
    print("{:.6f}".format(a),"{:.6f}".format(b))
    x = read(float)
