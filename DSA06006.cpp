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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[3] = {0};
        int n, x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < a[i]; j++) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}