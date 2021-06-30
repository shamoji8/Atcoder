#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n, m; cin >> n >> m;
  vector<ll> ans(n);
  rep(i, m) {
    ll a, b; cin >> a >> b;
    ans[a-1]++;
    ans[b-1]++;
  }
  rep(i, n) {
    cout << ans[i] << endl;
  }
}
