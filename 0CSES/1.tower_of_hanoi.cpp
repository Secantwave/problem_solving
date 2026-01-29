#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>

void move(int i, int t){
    cout << i << " " << t << endl;
}

void th(int i, int m, int t, int k){
    if(k==2){
        move(i,m);
        move(i,t);
        move(m,t);
        return;
    }
    th(i, t, m, k-1);
    move(i,t);
    th(m, i, t, k-1);
}

void solve(){
    int k;
    cin >> k;
    th(1,2,3,k);
    cout<<"test case over";
}    


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}