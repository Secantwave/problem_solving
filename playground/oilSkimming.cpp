#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n,m;
    cin >> n >> m;
    vi a;
    for(int i=0; i<n; i++){
        int ai;
        cin >> ai;
        if(find(a.begin(), a.end(), ai )!=a.end()){
            a.push_back(ai);
        }
    }

    cout << a.size() << endl;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}