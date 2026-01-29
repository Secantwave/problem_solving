#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long a, b, k;
    cin>>a>>b>>k;

    long long gcd_ab  = gcd(a,b);
    long long r_a = a/gcd_ab;
    long long r_b = b/gcd_ab;

    if(r_a<=k && r_b<=k){
        cout << 1 << endl;
        return;
    }

    cout << 2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}