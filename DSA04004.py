
def solve():
    n, k = [int (x) for x in input().split()]
    a = []
    a.append(0)
    for i in range(1, n + 1):
        a.append(2 ** (i - 1))
    
    for i in range(n, 0, -1):
        if (k == a[i]):
            print(i)
            return
        else:
            if k > a[i]:
                k -= a[i]

def main():
    t = int(input())
    for i in range(t):
        solve()

main()
