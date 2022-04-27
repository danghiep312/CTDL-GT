#include <bits/stdc++.h>
using namespace std;

string ns = "*/+-";

bool isalpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool nonalpha(char x)
{
    for (auto i : ns)
        if (x == i)
            return true;
    return false;
}

void solve()
{
    stack<string> st;
    string s;
    string res = "";
    cin >> s;
    // cout << s;
    st = stack<string>();
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (nonalpha(s[i]))
        {
            res = '(' + st.top();
            st.pop();
            res += s[i];
            res = res + st.top() + ')';
            st.pop();
            st.push(res);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    cout << st.top();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}