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

bool isOperater(char c) {
    switch (c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
    }
    return false;
}

void init() {

}

void solve() {
    string s;
    cin >> s;
    stack<string> st;
    for (int i = 0; i < s.size(); i++) {
        if (isOperater(s[i])) {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string s3 = s[i] + s2 + s1;
            st.push(s3);
        }
        else {
            st.push(string(1, s[i]));
        }
    }
    cout << st.top();
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