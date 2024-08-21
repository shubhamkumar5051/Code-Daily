#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int temp = 660;
    int b = 660;
    int a = temp%10;
   if(b%a == 0)
   {
    cout<<"yes";
   }else{
    cout<<"no";
   }
}

int main() {
    fastio;
    int t = 1;
    //cin >> t; // Uncomment if multiple test cases
    while(t--) {
        solve();
    }
    return 0;
}