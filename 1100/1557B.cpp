#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> kk(k,-1);
    int count = 0;
    for(int i=1; i<n; i++){
        if(a[i-1]<a[i]){
            for(int j=0; j<count; j++){
                if(kk[j]!=-1){
                    if(a[kk[j]]>a[i]){
                        continue;
                    }
                }
            }
        }
        if(count<k){
            kk[count] = i-1;
            count++;
        } else {
            cout << "NO" << endl;
            return;
        }
         
    }
    cout << "YES" <<endl;

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}