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
int a[10], cnt = 0;

void init() {
	cin >> n >> k;
	FOR(i, 0, n - 1) {
		cin >> a[i];
	}
}

bool check(string s) {
	int sum = 0;
	FOR(i, 0, n - 1) {
		if (s[i] == '1') {
			sum += a[i];
		}
	}
	if (sum == k) return true;
	return false;
}

void sinh(string s) {
	if (s.size() == n) {
		if (check(s)) {
			cnt++;
			FOR(i, 0, n - 1) {
				if (s[i] == '1') {
					cout << a[i] << " ";
				}
			}
			cout << endl;
		}
	}
	else {
		sinh (s + "0");
		sinh (s + "1");
	}
}

int main() {
	init();
	sinh("");
	cout << cnt;
}