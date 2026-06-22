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
ll min(ll a, ll b){
    if(a<b) return a;
    return b;
}
void solve() {
    int n;
    ll p;
    cin >> n >> p;

    vll a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    vpll people;
    for (int i = 0; i < n; i++) {
        people.push_back({b[i], a[i]});
    }

    sort(people.begin(), people.end());

    ll answer = p;     // Inform the cheapest sender directly.
    ll inf = 1;

    for (auto [cost, capacity] : people) {
        if (inf == n) break;

        ll cinf = min(capacity, (ll)n - inf);
        answer += cinf * min(cost, p);
        inf += cinf;
    }

    cout << answer << '\n';
    
}

int main() {
    FAST_IO
    
    int t; cin >> t;
    while (t--) solve();

    return 0;
}