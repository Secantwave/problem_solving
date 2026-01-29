#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>


void solve(){
    int n, count;
    cin >> n;
    if(n%2!=0){
        cout << "0" << endl; 
        return; 
    } 
    count = (n/4) + 1;
    cout << count << endl;
}    


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}