#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;

    int max;
    int x1, x2;
    cin >> x1;
    max = x1;
    for(int i = 1; i<n; i++){
        cin >> x2;
        if(max < x2-x1) max = x2-x1;
        x1 = x2;
    }
    if(max < 2*(x-x1)) max = 2*(x-x1);

    cout << max << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
