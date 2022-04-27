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

int n, k;
vector<int> a;
int flag;
void init() {
    cin >> n >> k;
    a.resize(n);
    flag = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a.begin(), a.end());
}

bool check(string s) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            sum += a[i];
        }
    }
    if (sum == k) {
        flag = 0;
        return true;
    }
    return false;
}

void display(string s) {
    string res = "[";
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            res += (to_string(a[i]) + " ");
        }
    }
    res.pop_back();
    res += ']';
    cout << res << " ";
}

void Try(string s) {
    if (s.size() == n) {
        if (check(s)) {
            display(s);
        }
    }
    else {
        Try(s + "1");
        Try(s + "0");
    }
}

void solve() {
    Try("");
    if (flag) {
        cout << -1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}