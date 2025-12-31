import sys
import threading
def solve():
    data = sys.stdin.read().strip().split()
    n = int(data[0]) # how many kids in queue
    t = int(data[1]) # swaps
    
    s= data[2] # either B or G 

    for _ in range(t):
        ns = s.replace("BG", "GB")
        if ns == s:
            break
        s = ns 

    sys.stdout.write(s)

if __name__ == "__main__":
    solve()
