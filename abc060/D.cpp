#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// 解説確認済み
// 全探索可能なナップザック問題
// 各重さごとでソートする必要がある(これを忘れてた)
int main()
{
  ll n, w; cin >> n >> w;
  vector<ll> V[4];
  ll w1, v1; cin >> w1 >> v1;
  V[0].emplace_back(v1);
  REP(i, 1, n) {
    ll x, y; cin >> x >> y;
    V[x - w1].emplace_back(y);
  }
  rep(i,4){
    sort(V[i].begin(), V[i].end());
    reverse(V[i].begin(), V[i].end());
  }
  ll ma = 0;
  // +1 する必要がある
  rep(i, V[0].size()+1) {
    rep(j, V[1].size()+1) {
      rep(k, V[2].size()+1) {
        rep(l, V[3]. size()+1) {
          ll value = 0;
          ll weight = 0;
          rep(m, i) {
            value += V[0][m];
            weight += w1;
          }
          rep(m, j) {
            value += V[1][m];
            weight += w1 + 1;
          }
          rep(m, k) {
            value += V[2][m];
            weight += w1 + 2;
          }
          rep(m, l) {
            value += V[3][m];
            weight += w1 + 3;
          }
          if(weight <= w) ma = max(ma, value);
        }
      }
    }
  }
  cout << ma << endl;
}
