import sys
import threading
def solve():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    t = int(next(it, 1))
    out = []

    for _ in range(t):
        n = int(next(it))
        arr = [int(next(it)) for _ in range(n)]

        # ---- solve test case here ----
        out.append("")

    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    solve()
