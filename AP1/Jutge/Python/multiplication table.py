from easyinput import read

def multiplicar(x):
    for i in range (11):
        if i > 0:
            print(x,"*",i, " = ", x*i, sep = "")
        ++i

x = read(int)
multiplicar(x)
