#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 100005

int dp[901][8101];

int minimumNumberOfDigits(int a, int b)
{
    if (a > b || a < 0 || b < 0 || a > 900 || b > 8100)
        return -1;
    if (a == 0 && b == 0)
        return 0;

    if (dp[a][b] != -1)
        return dp[a][b];

    int ans = 101;

    for (int i = 9; i >= 1; i--)
    {

        int k = minimumNumberOfDigits(a - i, b - (i * i));

        if (k != -1)
            ans = min(ans, k + 1);
    }

    return dp[a][b] = ans;
}

void printSmallestNumber(int a, int b)
{

    memset(dp, -1, sizeof(dp));

    dp[0][0] = 0;

    int k = minimumNumberOfDigits(a, b);

    if (k == -1 || k > 100)
        cout << "-1";
    else
    {
        while (a > 0 && b > 0)
        {

            for (int i = 1; i <= 9; i++)
            {
                if (a >= i && b >= i * i &&
                    1 + dp[a - i][b - i * i] == dp[a][b])
                {
                    cout << i;
                    a -= i;
                    b -= i * i;
                    break;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        printSmallestNumber(a, b);
        cout << endl;
    }
}