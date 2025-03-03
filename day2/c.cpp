// https://codeforces.com/problemset/problem/2039/B

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
    string s;
    cin>>s;
    int n = s.length();
    if(n == 1){
        cout<< -1 <<endl;
        return;
    }
    if(n == 2){
        cout << (s[0] == s[1] ? s : "-1") << endl;
        return;
    }
    if(n == 3){
        if(s[0] == s[1] and s[1] == s[2]){
            cout<<s[0]<<s[1]<<endl;
        }
        else if(s[0] == s[1]){
            cout<<s[0]<<s[1]<<endl;
        }
        else if(s[1] == s[2]){
            cout<<s[1]<<s[2]<<endl;
        }
        else if(s[0] == s[2]){
            cout<<"-1"<<endl;
        }
        else{
            cout<<s<<endl;
        }
        return;
    }
    // finding for 2
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            cout<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    // finding for 3
    for(int i=1;i<n-1;i++){
        if(s[i] != s[i-1] and s[i] != s[i+1] and s[i-1] != s[i+1]){
            cout<<s[i-1]<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    cout<< -1 <<endl;
    return;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--) solve();
}
