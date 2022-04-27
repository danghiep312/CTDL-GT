#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string s, string r)
{
    int dp[s.length() + 1][r.length() + 1];
    for (int i = 0; i <= s.size(); i++)
    {
        for (int j = 0; j <= r.size(); j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (s[i - 1] == r[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[s.length()][r.length()];
}

int minInsertion(string s)
{
    string r = s;
    reverse(r.begin(), r.end());

    int maxlen = longestCommonSubsequence(s, r);

    return s.size() - maxlen;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; 
        cin >> s;
        int ans = minInsertion(s);
        cout << ans << endl;
    }
}