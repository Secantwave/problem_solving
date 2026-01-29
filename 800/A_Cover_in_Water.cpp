#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<char> cells(n);
    int empty = 0;
    int consecutive = 0;
    for(int i = 0; i<n; i++){
        cin >> cells[i];
        if(cells[i]=='.') empty++;
    }

    for(auto x:cells){
        if(x == '.'){
            consecutive++;
            if(consecutive == 3){
                cout << 2 << endl;
                return;
            }
        } else consecutive = 0;
    }

    cout << empty << endl;

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}