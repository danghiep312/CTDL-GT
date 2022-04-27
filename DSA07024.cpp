#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (int &x : a)
            cin >> x;

        stack<int> st;
        vi l(n), r(n);
        // l[i] la so nho nhat sao cho a[i] la min cua doan a[l[i]] -> a[i]
        // r[i] la so lon nhat sao cho a[i] la min cua doan a[i] -> a[r[i]]
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && a[st.top()] >= a[i])
                st.pop();

            l[i] = st.empty() ? 0 : st.top() + 1;
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[st.top()] >= a[i])
                st.pop();

            r[i] = st.empty() ? n - 1 : st.top() - 1;
            st.push(i);
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (r[i] - l[i] + 1 >= a[i])
                res = max(res, a[i]);
        }
        cout << res << endl;
    }
}
