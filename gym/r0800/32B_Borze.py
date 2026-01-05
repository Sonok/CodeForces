import sys
import threading
def solve():
    data = sys.stdin.read().strip()
    i = 0
    ret = ""

    while i < len(data):
        if data[i] == ".":
            ret += "0"
            i += 1
        else:
            if data[i+1] == ".":
                ret += "1"
            else:
                ret += "2"
            i += 2

    sys.stdout.write(ret)

if __name__ == "__main__":
    solve()
