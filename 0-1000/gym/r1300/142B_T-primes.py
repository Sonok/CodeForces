import sys
import math

MAX = 10**6

def sieve(limit: int):
    is_prime = bytearray(b"\x01") * (limit + 1)
    is_prime[0:2] = b"\x00\x00"
    for p in range(2, int(limit**0.5) + 1):
        if is_prime[p]:
            step = p
            start = p * p
            is_prime[start:limit + 1:step] = b"\x00" * (((limit - start) // step) + 1) # rhs must match slice size
    return is_prime

IS_PRIME = sieve(MAX)

def isTPrime(x: int) -> bool: 
    root = (int)(math.isqrt(x))
    return root ** 2 == x and IS_PRIME[root]

def solve():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    n = int(next(it)) # number of numbers will will process 
    out = []

    for _ in range(n):
        val = int(next(it))
        out.append("YES" if isTPrime(val) else "NO")

    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    solve()