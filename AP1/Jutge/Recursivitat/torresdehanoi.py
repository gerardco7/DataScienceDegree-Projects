from easyinput import read

def hanoi(n, ori, dest, aux):
    if n > 0:
        hanoi(n- 1, ori, aux, dest)
        print(ori, '=>', dest)
        hanoi(n - 1, aux, dest, ori)

n = read(int)
hanoi( n, 'A', 'C', 'B')
