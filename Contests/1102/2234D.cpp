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


/*
    Couldnt solve
*/

string xorb(const string& a, const string& b) {
    string r = a;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i])
            r[i] = '0';
        else
            r[i] = '1';
    }

    return r;
}

int nzero(const string& a){
    int n=0;

    for(int i=0; i<a.size(); i++){
        if(a[i]=='0') n++;
    }
    return n;
}
void solve() {
    int n;  int k; 
    cin >> n >> k;

    int len = pow(2,k) + 1;
    vector<string> b(len);
    cin >> b[0] >> b[len-1];

    vi p = {0, len-1};
    int size = 2;
    while(p.size()<len){
        for(int i=0; i<p.size()-1; i++){
            int j = (p[i]+p[i+1])/2;
            b[j] = xorb(b[p[i]], b[p[i+1]]);
        }
        for(int i=0; i<size*2 -2; i+=2){
            int idx = ((i + i + 1)/2) +1;
            int val = (p[i] + p[i+1])/2;
            p.insert(p.begin() + idx, val);
        }
        size = p.size();
    }

    int sum  = 0;

    for(int i=0; i<len; i++){
        int x = nzero(b[i]);
        int y = n-x;
        sum += x*y;
    }

    cout << sum << endl;
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}