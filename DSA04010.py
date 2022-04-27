
def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    res = 0
    sum = 0
    for i in a:
        sum += i
        res = max (res, sum)
        if (sum < 0):
            sum = 0
    print(res)


def main():
    t = int(input())
    for i in range(t):
        solve()

main()