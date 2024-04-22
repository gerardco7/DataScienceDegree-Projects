from easyinput import read

def bars(x):

    if x == 1:
        print("*")
    else:
        bars(x - 1)
        bars(x - 1)
        print(x * "*", sep = "")

def main():
    n = read(int)
    bars(n)

main()
