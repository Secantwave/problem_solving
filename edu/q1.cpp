#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    string s;
    cin >> s;

    vi count = {0,0,0};
    string other = "";

    for(auto x:s){
        if(x=='T') count[0]++;
        else if(x=='N') count[1]++;
        else if(x=='F') count[2]++;
        else other += string(1,x);
    }
    string ans = "";
    ans += string(count[0],'T');
    ans += string(count[1],'N');
    ans += other;
    ans += string(count[2],'F');

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}