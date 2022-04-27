#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    switch (c)
    {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

void solve() {
    string s;
    cin >> s;
    stack<long long> st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (isOperator(s[i])) {
            long long x = st.top();
            st.pop();
            long long y = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(x + y);
                break;
            case '-':
                st.push(x - y);
                break;
            case '/':
                st.push(x / y);
                break;
            case '*':
                st.push(x * y);
                break;
            }
        }
        else {
            st.push(s[i] - '0');
        }
      
    }
    cout << st.top();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}