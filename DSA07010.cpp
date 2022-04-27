#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x)
{
    switch (x) {
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
    stack<string> st;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (isOperator(s[i])) {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string res = s1 + s2 + s[i];
            st.push(res);
        } else {
            st.push(string(1, s[i]));
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