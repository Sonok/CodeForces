import sys
def solve():
    string = sys.stdin.read().strip()
    yr = int(string) + 1

    def isUnique(x:str) -> bool:
        s = set(list(x))
        return len(s) == 4

    while True:
        if isUnique(str(yr)): 
            break
        yr += 1
    
    sys.stdout.write(str(yr))

if __name__ == "__main__":
    solve()
