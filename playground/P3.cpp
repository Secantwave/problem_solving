#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    int current = h[k];
    sort(h.begin(),h.end());
    int level = 1;
    int max_sec;

    auto it = find(h.begin(), h.end(), current);
    k = it - h.begin();
    
    while(true){
        if(h[n-1] == h[k]){
            cout<<"YES"<<endl;
            return;
        }
        max_sec = h[k]-level+1;
        auto it = upper_bound(h.begin()+k, h.end(), max_sec+h[k]);
        if (it != h.begin()+k) {
            --it;
            level = h[it - h.begin()+k] - h[k];
            k = it - h.begin()+k;
        } else {
            cout << "NO" << endl;
            return;
        }               
    }
}    


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}