from easyinput import read

def bars(x):

    if x == 1:
        print("*")
    else:
        print(x * "*", sep = "")
        bars(x - 1)
        bars(x - 1)

def main():
    n = read(int)
    bars(n)

main()
