from easyinput import read

def double_factorial(x):
    factorial = 1
    while x > 1:
        factorial *= x
        x -= 2
    return factorial

x = read(int)
print(double_factorial(x))
