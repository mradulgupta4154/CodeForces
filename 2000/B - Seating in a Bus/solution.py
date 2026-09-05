import sys
 
 
def solve():
  input = sys.stdin.read
  data = input().split()
 
  if not data:
    return
 
  t = int(data[0])
  idx = 1
  results = []
 
  for _ in range(t):
    n = int(data[idx])
    a = [int(x) for x in data[idx + 1 : idx + 1 + n]]
    idx += 1 + n
 
    L = a[0]
    R = a[0]
    possible = True
 
    for i in range(1, n):
      if a[i] == L - 1:
        L -= 1
      elif a[i] == R + 1:
        R += 1
      else:
        possible = False
        break
 
    results.append("YES" if possible else "NO")
 
  print("
".join(results))
 
 
if __name__ == "__main__":
  solve()