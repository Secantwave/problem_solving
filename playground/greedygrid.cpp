#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = min(a[0],a[1]) + a[0];
    
    cout << ans;
}    


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}

/*

1 2 3

i = 2
j = 3
a3 = 0
a2 = 5
1 5 0
min(a1) = 1
= 1
 =0
2
min()

*/