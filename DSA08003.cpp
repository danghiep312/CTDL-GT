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

deque<int> dq;
int n;

void init() {
    cin >> n;
}

void solve() {
    while (n--) {
        string s;
        cin >> s;
        if (s == "PUSHFRONT") {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        if (s == "PUSHBACK") {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        if (s == "POPFRONT") {
            if (!dq.empty()) {
                dq.pop_front();
            }
        }
        if (s == "POPBACK") {
            if (!dq.empty()) {
                dq.pop_back();
            }
        }
        if (s == "PRINTFRONT") {
            if (!dq.empty()) {
                cout << dq.front();
            } else {
                cout << "NONE";
            }
            cout << endl;
        }
        if (s == "PRINTBACK") {
            if (!dq.empty()) {
                cout << dq.back();
            } else {
                cout << "NONE";
            }
            cout << endl;
        }
    }
}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}