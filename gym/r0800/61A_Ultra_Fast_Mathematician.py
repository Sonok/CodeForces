import sys

if __name__ == "__main__":
    data = sys.stdin.read().split()
    s1, s2 = data[0], data[1]
    
    res = ['1' if a != b else '0' for a,b in zip(s1, s2)]

    sys.stdout.write("".join(res))
    
