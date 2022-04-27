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

vector<string> s;
set<string> ss;
int n, k;
int a[30];

void init() {
    cin >> n >> k;
    string tmp;
    FOR(i,1 , n) {
        cin >> tmp;
        ss.insert(tmp);
    }
    s.pb("");
    for (auto it : ss) {
        s.push_back(it);
    }
    
    n = s.size() - 1;
}

void display() {
    for (int i = 1; i <=k; i++) {
        cout << s[a[i]] << " ";
    }
    cout << endl;
}

void sinh(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k + 1) {
            display();
            return;
        }
        else {
            sinh(i + 1);
        }
    }
}

void solve() {
    sinh(1);
}

int main() {
    int t = 1;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}