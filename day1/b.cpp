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
    int n, m, k;
    cin >> n >> m >> k;

    vi a(m);
    vi q(k);

    for (int &x : a) cin >> x;
    for(int &x : q) cin>>x;

    if(n - k > 1){
        for(int i=0;i<m;i++) cout<<"0";
        cout<<endl;
        return;
    }

    // finding the not included set
    set<int> st;
    for(int i=1;i<=n;i++) st.insert(i);
    for(int i=0;i<k;i++) st.erase(q[i]);

    if(st.empty()){
        for(int i=0;i<m;i++) cout<<"1";
        cout<<endl;
        return;
    }

    int val = *st.begin();

    for(int i=0;i<m;i++){
        if(val == a[i]) cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--) solve();
}
