// https://codeforces.com/problemset/problem/2037/C

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define yes() cout << "YES\n";
#define no() cout << "NO\n";

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a) cin >> x;

    sort(all(a));

    for (int x : a) cout << x << " ";
    cout << '\n';
}

int main() {
    fast_io();
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--) solve();
}
