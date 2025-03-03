// https://codeforces.com/problemset/problem/2051/C

#include <vector>
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define yes() cout << "YES\n";
#define no() cout << "NO\n";

int log2_fast(int n) {
    return 31 - __builtin_clz(n); // For 32-bit integers
}

vector<int> pre;

int solve(int n) {
    return pre[n];
}

int main() {
    fast_io();
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    pre.resize(1e5+1, 0);
    pre[0] = pre[1] = 1;
    pre[2] = 2;
    for(int i=3;i<1e5+1;i++){
        pre[i] = 1 + pre[(i-1)/2];
    }

    while (t--) {
        int n;
        cin>>n;
        int ans = solve(n);
        cout<<ans<<endl;
    }
    return 0;
}
