#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n; cin >> n;
  map<ll, ll> map;
  rep(i, n) {
    ll x; cin >> x;
    map[x]++;
  }
  ll ans = n*(n-1)/2;
  for (auto p : map) {
    auto num = p.second;
    ans -= num * (num-1) / 2;
  }
  cout << ans << endl;
}
