
def solve():
    m, n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    a += b
    a.sort(reverse=False)
    print(a[k - 1])

def main():
    t = int(input())
    for i in range(t):
        solve()

main()