import bisect as bi

def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    print(bi.bisect_left(a, 1))

t = int(input())
for i in range(t):
    solve()