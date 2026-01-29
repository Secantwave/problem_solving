#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vll vector<long long>

void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    auto ub = upper_bound(a.begin(), a.end(), c);
    if (ub == a.begin()) {
        cout << a.size() << endl;
        return;
    }
    
    auto it = ub - 1;
    
    while (!a.empty() && it >= a.begin()) {
        a.erase(it);
        for (auto &x : a) {
            x *= 2;
        }

        if (a.empty()) break;

        ub = upper_bound(a.begin(), a.end(), c);
        if (ub == a.begin()) break;
        it = ub - 1;
    }
    
    cout << a.size() << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
