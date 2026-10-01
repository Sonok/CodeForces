import sys
import threading
def solve():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    out = []

    n = int(next(it, 1))
    i = j = k = 0

    for _ in range(n):
        i += int(next(it))
        j += int(next(it))
        k += int(next(it))

    # ---- solve test case here ----
    ans = "YES" if i == 0 and j == 0 and k == 0 else "NO"
    out.append(ans)

    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    solve()
