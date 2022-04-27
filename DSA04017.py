
def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]

    for i in range(len(b)):
        if (a[i] != b[i]):
            print(i + 1)
            return
    print(n)

t = int(input())

for i in range(t):
    solve()
