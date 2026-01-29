#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k; cin>>n>>k;
    ll h_k;
    ll l = 1;
    vector<ll> h;
    for (int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        h.push_back(x);
        if(i==k){
            ll h_k = x;
        }
    }
    sort(h.begin(), h.end());
    auto it = lower_bound(h.begin(), h.end(), h_k);
    while(*it != h[n]){
        ll maxSec = *it - l + 1;
        auto it = maxSec + (maxSec+l-1);
        
    }
    cout << "YES" << endl;
}    


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}