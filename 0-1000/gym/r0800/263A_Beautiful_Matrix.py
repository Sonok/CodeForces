import sys
import threading
def solve():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    out = []

    count = 0
    for i in range(25):
        val = int(next(it))
        if val == 1:
            break
        count += 1

    i, j = count // 5, count % 5 
    val = abs(2-i) + abs(2-j)
    sys.stdout.write(str(val))

if __name__ == "__main__":
    solve()
