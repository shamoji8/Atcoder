#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n, k; cin >> n >> k;
  map<ll, ll> map;
  rep(i, n) {
    ll a, b; cin >> a >> b;
    map[a] += b;
  }
  ll cnt = 0;
  ll ans = 0;
  for(auto p : map) {
    cnt += p.second;
    if(cnt >= k) {
      ans = p.first;
      break;
    }
  }
  cout << ans << endl;
}
