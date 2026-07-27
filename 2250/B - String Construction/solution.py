import sys
 
def solve():
    data = sys.stdin.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    out = []
    for _ in range(t):
        n, k = int(data[idx]), int(data[idx+1]); idx += 2
        if k == n - 1:
            out.append("-1")
            continue
        m = n - k
        numA, numB = (m + 1) // 2, m // 2      # runs of '0', runs of '1'
        c0, c1 = (n + 1) // 2, n // 2           # total zeros, ones desired
        lengths = [1] * m
        lengths[0] += c0 - numA                # extra length onto first '0' run
        lengths[1] += c1 - numB                # extra length onto first '1' run
        parts = []
        for i in range(m):
            ch = '0' if i % 2 == 0 else '1'
            parts.append(ch * lengths[i])
        out.append(''.join(parts))
    sys.stdout.write('
'.join(out) + '
')
 
solve()