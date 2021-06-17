#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n, t; cin >> n >> t;
  ll time1 = 0, time2 = 0;
  ll ans = 0;
  rep(i, n) {
    ll dif;
    cin >> time2;
    dif = time2 - time1;
    ans += min(dif, t);
    time1 = time2;
  }
  cout << ans + t << endl;
}
