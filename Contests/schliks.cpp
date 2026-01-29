#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k,a,b,x,y;
    cin >> k >> a>>b>>x>>y;
    int num=0;
    if(x>y) {
        if(k-b>=0){
            num+=(k-b)/y;
            num++;
            k-=num*y;
        }
        if(k-a>=0){
            num+=(k-a)/x;
            num++;
        }
    } else{
        if(k-a>=0){
            num+=(k-a)/x;
            num++;
            k-=num*x;
        }
        if(k-b>=0){
            num+=(k-b)/y;
            num++;
        }
    }
    cout << num << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}