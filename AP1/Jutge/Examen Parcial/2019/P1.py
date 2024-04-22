from easyinput import read

def base(n, b):
    aux = 0;
    while n >= 1:
        aux = n % b
        n = n // b
        print(aux * "X", sep = "")

n = read(int)
b = read(int)

print(10 * "-")
base (n, b)
print(10 * "-")
