#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define htii unordered_map<int, int>
#define htci unordered_map<char, int>
#define htil unordered_map<int, ll>
#define htli unordered_map<ll, int>
#define htcl unordered_map<char, ll>

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef DEBUG
    #define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
    #define dbg(x)
#endif

void solve() {
    string s; cin >> s;
    int n = s.length();
    vi cd(n, 0);
    if(s[0]=='1') cd[0]++;
    for(int i=1; i<n; i++){
        if(s[i]=='1') cd[i] = cd[i-1] + 1;
        else cd[i] = cd[i-1];
    }

    int cost = 0;
    int len = n;
    int n0 = (len - cd[len-1]);
    int n1 = cd[len-1]; 
    while(len > 0 &&  (len - cd[len-1]) != n1){
        int del; 
        if(n0 > cd[len-1]){
            del = n0 - cd[len-1];
            n0 = cd[len-1];
            len -= del;
        } else {
            del = n1 - (len - cd[len-1]);
            n1 = (len - cd[len-1]);
            len-= del;
        }

        cost += del;
    }

    cout << cost << endl;
}

int main() {  
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}