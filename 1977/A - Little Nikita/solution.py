import sys
 
def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return
    
    t = int(data[0])
    results = []
    
    idx = 1
    for _ in range(t):
        n = int(data[idx])
        m = int(data[idx + 1])
        idx += 2
        
        if n >= m and (n - m) % 2 == 0:
            results.append("Yes")
        else:
            results.append("No")
            
    print('
'.join(results))
 
if __name__ == '__main__':
    solve()