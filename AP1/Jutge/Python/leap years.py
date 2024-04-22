from easyinput import read

def leapyear(any):
    if any % 4 == 0:
        if any % 100 != 0:
            return True
        if any // 100 % 4 == 0:
            return True
    return False

any = read(int)

if (leapyear(any)):
    print("YES")
else:
    print("NO")
