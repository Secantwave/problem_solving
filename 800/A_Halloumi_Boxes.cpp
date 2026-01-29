#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, N, K;
    
    cin >> t;
    while(t--){
        cin >> N >> K;
        vector<int> boxes(N);
        for(int i = 0; i<N; i++){
            cin >> boxes[i];
        }
        if(K>1 || is_sorted(boxes.begin(),boxes.end())) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}