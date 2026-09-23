import sys
 
 
def solve():
    input = sys.stdin.read
    data = input().split()
 
    if not data:
        return
 
    t = int(data[0])
    idx = 1
 
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        arr = [int(x) for x in data[idx : idx + n]]
        idx += n
 
        # Required counts for "01032025"
        req = {0: 3, 1: 1, 2: 2, 3: 1, 5: 1}
        curr = {0: 0, 1: 0, 2: 0, 3: 0, 5: 0}
 
        ans = 0
        for i in range(n):
            val = arr[i]
            if val in curr:
                curr[val] += 1
 
            # Check if all counts are satisfied
            if all(curr[d] >= req[d] for d in req):
                ans = i + 1
                break
 
        print(ans)
 
 
if __name__ == "__main__":
    solve()