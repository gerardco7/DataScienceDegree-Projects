from easyinput import read

def numberofdigits(x):
    d = 1;
    while x > 9:
        x = x // 10
        d += 1
    return d

x = read(int)
print("The number of digits of ", x, " is ",numberofdigits(x),".", sep = "")
