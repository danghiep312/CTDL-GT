#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
typedef long long ll;
 
/*
    sinh to hop a[i-1]+1 -> n-k+i
                  a[i-1] -> 1
    (5) 
    (4 1) 
    (3 2) 
    (3 1 1) 
    (2 2 1) 
    (2 1 1 1) 
    (1 1 1 1 1) 
*/
int n;
vector<int>a;
void print(){
    cout << "(";
    for(int i=1;i<a.size()-1;i++) cout << a[i] << ' ';
    cout << a.back() << ") ";
}
 
void Try(int s){
    for(int i = a.back(); i >= 1; i--){
        if(s+i <= n){
            a.push_back(i);
            if(s+i == n) print();
            else Try(s+i);
            a.pop_back();
        }
    }
}
 
void solve(){
 
    cin >> n;
    a.assign(1,n);// = a.clear(), a.resize(5,2); 
    Try(0);
    cout << endl;
}
 
 
int main(){
    faster
    int t;
    cin >> t;
    while(t--) solve();
 
    return 0;
 
}