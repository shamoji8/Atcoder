#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll p; cin >> p;
  ll co = 1;
  ll a = 1;
  ll cnt = 0;
  while(1) {
    if(co <= p && p <= co * (a + 1)) break;
    else {
      a++;
      co *= a;
    }
  }
  while(1) {
    if(p >= co){
      p -= co;
      cnt++;
    }
    if(p >= co) continue;
    else {
      co /= a;
      a--;
    }
    if(p == 0) break;
  }
  cout << cnt << endl;
}
