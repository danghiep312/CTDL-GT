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

int val(char x) {
    if (x == '*' || x == '/') return 3;
    if (x == '+' || x == '-') return 2;
    if (x == '^') return 4;
    if (x == '(') return 0;
}

void init() {
    
}

void solve() {
    string s, res;
    stack<char> st;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')) {
            res += s[i];
        }
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        }
        else {
            if (st.empty() || val(st.top()) < val(s[i])) {
                st.push(s[i]);
            }
            else {
                while (!st.empty() && val(st.top()) >= val(s[i])) {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}