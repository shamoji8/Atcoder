#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll a, b, c; cin >> a >> b >> c;
  if(c >= a && c <= b) cout << "Yes" << endl;
  else cout << "No" << endl;
}
