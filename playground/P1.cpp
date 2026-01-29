#include <bits/stdc++.h>
using namespace std;



void solve(){
    int x;
    
    
    cin >> x;
    int digit = x%10;
    while(x!=0){
        if(digit>x%10) digit=x%10;
        x = x/10;
    }
    cout << digit << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}