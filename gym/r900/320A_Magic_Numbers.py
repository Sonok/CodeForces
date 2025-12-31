import sys
import threading
def solve():
    data = sys.stdin.read().strip()

    n = len(data)

    i = 0
    while i < n: 
        if data[i] != '1':
            sys.stdout.write("NO")
            return
        j = i + 1
        runningCountFours = 0
        while j < n and data[j] == '4':
            runningCountFours += 1
            if runningCountFours > 2:   
                sys.stdout.write("NO\n")
                return
            j += 1
        i = j
    sys.stdout.write("YES")

if __name__ == "__main__":
    solve()
