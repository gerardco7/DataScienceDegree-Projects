from easyinput import read

def girat(n):

    m = 0;
    while n > 0:
        m = m * 10 + n % 10
        n //= 10
    return m


def is_palindromic(n):
    if girat(n) == n:
        return True
    return False

n = read(int)
if(is_palindromic(n)):
    print("true")
else:
    print("false")
