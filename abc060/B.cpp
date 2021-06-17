#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll a, b, c; cin >> a >> b >> c;
  bool flag = false;
  for(int i = 1; i < b; i++) {
    if(a * i % b == c) {
      flag = true;
      break;
    }
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
