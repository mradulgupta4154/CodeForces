import sys
 
def solve():
    input = sys.stdin.read
    data = input().split()
    if not data:
        return
    
    t = int(data[0])
    idx = 1
    out = []
    
    for _ in range(t):
        n = int(data[idx])
        a = [int(x) for x in data[idx+1 : idx+1+n]]
        idx += 1 + n
        
        # Find 1-based indices of min and max elements
        min_idx = a.index(min(a)) + 1
        max_idx = a.index(max(a)) + 1
        
        L = min(min_idx, max_idx)
        R = max(min_idx, max_idx)
        
        # Three options
        option1 = R                      # Remove both from left
        option2 = n - L + 1              # Remove both from right
        option3 = L + (n - R + 1)        # Remove left from left, right from right
        
        out.append(str(min(option1, option2, option3)))
        
    print('
'.join(out))
 
if __name__ == '__main__':
    solve()