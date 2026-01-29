#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>


void solve(){
    int n, t; int x=0;
    cin >> n;
    while(n--){
        cin >> t;
        if(!t){
            x=1;
        }
    }
    if(x) cout << "0" << endl;
    else cout << "1" << endl;
    return;

}    


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}