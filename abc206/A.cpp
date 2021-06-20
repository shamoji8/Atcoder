#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n; cin >> n;
  ll ans = (ll)(n * 1.08);
  if(ans < 206) cout << "Yay!" << endl;
  else if(ans == 206) cout << "so-so" << endl;
  else cout << ":(" << endl;
}
