#include <bits/stdc++.h>
using namespace std;

pair<int, int> hike(const vector<bool>& days, int k, int j, int n) {
    if (j + k <= n) {
        for (int i = 1; i < k; i++) {
            if (days[j + i]) {
                return {0, j + i}; 
            }
        }
        return {1, j + k}; 
    }
    return {0, j+1}; 
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<bool> days(n);
    for(int i = 0; i<n; i++){
        int day;
        cin >> day;
        days[i] = day;
    }
    int j = 0;
    int count = 0;
    while(j<n){
        if(days[j]){
            j++;
        } else {
            auto [canHike, nextIndex] = hike(days, k, j, n);
            if (canHike) {
                j = nextIndex+1;
                count++;
            } else {
                j = nextIndex;
            }
        }
    }

    cout << count << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}