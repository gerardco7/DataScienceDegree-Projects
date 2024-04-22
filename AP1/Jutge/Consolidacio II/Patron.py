from easyinput import read

def patro(x):
    if x == 1:
        print("1")
    else:
        a = str(x);
        patro(x - 1)
        print(a, sep = "")
        patro(x - 1)

def main():
    n = read(int)
    patro(n)

main()
