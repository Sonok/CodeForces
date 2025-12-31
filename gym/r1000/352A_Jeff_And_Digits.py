from collections import Counter
import sys
def solve():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    n = int(next(it))

    lst = Counter([int(next(it)) for _ in range(n)])
    if 0 not in lst:
        sys.stdout.write("-1\n")
        return
    
    if lst[5] < 9:
        sys.stdout.write("0\n")
        return 
    
    ret = "5" * ((lst[5]//9) * 9) + "0" * lst[0]
    sys.stdout.write(ret + "\n")

if __name__ == "__main__":
    solve()
