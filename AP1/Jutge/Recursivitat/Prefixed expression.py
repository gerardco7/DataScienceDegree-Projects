
from easyinput import read

def es_digit(c):
    return c>= '0' and c <= '9'

def avaluar():
    c = read(chr)
    if es_digit(c):
        return ord(c) - ord('0')
    else:
        op1 = avaluar()
        op2 = avaluar()
        if c == '+':
            return op1 + op2
        elif c == '-':
            return op1 - op2
        elif c == '*':
            return op1 * op2
        else:
            assert False

def main():
    print(avaluar())

main()
