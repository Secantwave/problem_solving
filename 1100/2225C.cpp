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
  int n;
  cin >> n;
  vs d(2);
  cin >> d[0] >> d[1];

  vi dp(n + 1, INF);
  dp[0] = 0;
  for (int i = 0; i < n; i++){
    dp[i + 1] = min(dp[i + 1], dp[i] + (d[0][i] != d[1][i]));
    if (i + 1 < n){
      dp[i + 2] = min(dp[i + 2], dp[i] + (d[0][i] != d[0][i + 1]) + (d[1][i] != d[1][i + 1]));
    }
  }

  cout << dp[n] << '\n';
    
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}