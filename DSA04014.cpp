#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FO(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;

typedef pair<int, int> II;
const long double PI = 2 * acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL)1e12;
const LL MOD = 1000000007;
#define maxn 100005

int n;
LL a[maxn];

long long merge(int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m, i, j, k;
    long long L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (i = 0; i < n2; i++)
        R[i] = a[m + i + 1];
    long long kq = 0;
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
        {
            a[k++] = R[j++];
            kq = kq + n1 - i;
        }
    }
    while (i < n1)
        a[k++] = L[i++];
    while (j < n2)
        a[k++] = R[j++];
    return kq;
}

long long tinh(int l, int r)
{
    long long kq = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        kq = kq + tinh(l, m);
        kq = kq + tinh(m + 1, r);
        kq = kq + merge(l, m, r);
    }
    return kq;
}

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    cout << tinh(0, n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}