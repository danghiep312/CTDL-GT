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

int n;
vector<int> a;

void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort (a.begin(), a.end());
}

void display() {
    for (auto i : a) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    do {
        display();
    }
    while (next_permutation(a.begin(), a.end()));
}

int main() {
    int t = 1;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}