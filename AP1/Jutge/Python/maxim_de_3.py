from easyinput import read

def max2 (x, y):
    if x >= y:
        return x
    else:
        return y

def max3( x, y, z):
    return max2(x, max2(y, z))

a, b, c = read(int, int, int)

print(max3(a, b, c))
