
def binary_search(arr, l, r, x):
    if r >= l:
        mid = l + (r - l) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binary_search(arr, l, mid - 1, x)
        else:
            return binary_search(arr, mid + 1, r, x)
    else:
        return -1

def solve():
    n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]

    pos = binary_search(a, 0, n - 1, k)

    if (pos == -1):
        print("NO")
    else:
        print(pos + 1)
    
t = int(input())
for i in range(t):
    solve()