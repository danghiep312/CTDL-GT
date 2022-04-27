#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, p, s;
vector<int> a, x;
vector<bool> check(205, 1);
vector<vector<int>> ans;
void era()
{
    for (int i = 2; i <= 200; i++)
    {
        if (check[i])
        {
            a.push_back(i);
            for (int j = i * i; j <= 200; j += i)
                check[j] = 0;
        }
    }
    m = a.size() - 1;
}

void init()
{
    ans.clear();
    cin >> n >> p >> s;
}

void Try(int pos, int cnt, int sum)
{
    for (int i = pos + 1; i <= m; i++)
    {
        if (sum + a[i] == s && cnt == n - 1)
        {
            x.push_back(a[i]);
            ans.push_back(x);
            x.pop_back();
        }
        else if (cnt < n - 1 && sum + a[i] < s)
        {
            x.push_back(a[i]);
            Try(i, cnt + 1, sum + a[i]);
            x.pop_back();
        }
    }
}

void solve()
{
    int pos = 0;
    while (a[pos] <= p)
        pos++;
    Try(pos - 1, 0, 0);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    era();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
}