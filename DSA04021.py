fibo = []

def init():    
    fibo.append(0)
    fibo.append(1)
    for i in range(2, 93):
        fibo.append(fibo[i-1] + fibo[i-2])


def solve():
    n, k = [int(x) for x in input().split()]
    while (1):
        if (n == 1):
            print(0)
            break
        if (n == 2):
            print(1)
            break
        if (k > fibo[n - 2]):
            k -= fibo[n - 2]
            n -= 1
        else:
            n -= 2
    


def main():
    init()
    t = int(input())
    for i in range(t):
        solve()

main()