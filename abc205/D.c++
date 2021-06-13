#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// 解説参考
// 二分探索　lower_boundの使い方
int main()
{
  ll n, q; cin >> n >> q;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> c(n);
  rep(i, n) {
    c[i] = a[i] - (i + 1);
  }
  while(q--) {
    ll k;
    cin >> k;
    ll idx = lower_bound(c.begin(), c.end(), k) - c.begin(); //cの最後の要素の次を示す→n
    if(idx == n) {
      cout << k + a[n-1] - c[n-1] << endl;
    } else {
      cout << a[idx] - 1 - c[idx] + k << endl;
    }
  }
}
