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

int l1[10] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int r1[10] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int l2[10] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int r2[10] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};
string left1(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[l1[i]];
    return b;
}
string right1(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[r1[i]];
    return b;
}
string left2(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[l2[i]];
    return b;
}
string right2(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[r2[i]];
    return b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, y;
        int x, mim = 1e9;
        for (int i = 0; i < 10; i++)
        {
            cin >> x;
            a += to_string(x);
        }
        b = "1238004765";
        pair<string, int> x1, x2, y1, y2, k;
        map<string, int> f;
        x1.fi = a;
        x1.se = 0;
        x2.fi = b;
        x2.se = 0;
        queue<pair<string, int>> q1, q2;
        q1.push(x1);
        q2.push(x2);
        while (q1.size())
        {
            y1 = q1.front();
            q1.pop();
            k.se = y1.se + 1;
            k.fi = left1(y1.fi);
            if (f[k.fi] == 0)
                f[k.fi] = k.se;
            q1.push(k);
            k.fi = right1(y1.fi);
            if (f[k.fi] == 0)
                f[k.fi] = k.se;
            q1.push(k);
            if (k.se == 14)
                break;
        }
        while (q2.size())
        {
            y2 = q2.front();
            q2.pop();
            if (f[y2.fi] > 0)
                mim = min(mim, f[y2.fi] + y2.se);
            k.se = y2.se + 1;
            k.fi = left2(y2.fi);
            q2.push(k);
            k.fi = right2(y2.fi);
            q2.push(k);
            if (k.se == 14)
                break;
        }
        cout << mim << endl;
    }
}