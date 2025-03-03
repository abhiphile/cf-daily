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
    vi b(n);
    for (int &x : a) cin >> x;
    for(int &x : b) cin>> x;

    int less = 0, equals = 0, ind = -1;
    for(int i=0;i<n;i++){
        if(a[i] < b[i]){
            less++;
            ind = i;
        }
        if(a[i] == b[i]) equals++;
    }
    if(less > 1){
        no()
        return;
    }
    if(less == 1){
        if(equals > 0) no()
        else{
            // can we have it ??
            int diff = b[ind] - a[ind];
            for(int i=0;i<n;i++){
                if(i != ind){
                    if(a[i] - b[i] < diff){
                        no()
                        return;
                    }
                }
            }
            yes()
        }
    }
    if(less == 0) yes()
    return;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--) solve();
}
