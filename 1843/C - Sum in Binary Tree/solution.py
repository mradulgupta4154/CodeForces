import sys
 
 
def solve():
    input = sys.stdin.read
    data = input().split()
    if not data:
        return
 
    t = int(data[0])
    results = []
 
    for i in range(1, t + 1):
        n = int(data[i])
        total = 0
        while n > 0:
            total += n
            n //= 2
        results.append(str(total))
 
    print("
".join(results))
 
 
if __name__ == "__main__":
    solve()