#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll a, b, c; cin >> a >> b >> c;
  if(c % 2 == 0) {
    if(abs(a) > abs(b)) cout << ">" << endl;
    else if(abs(a) < abs(b)) cout << "<" << endl;
    else cout << "=" << endl;
  } else {
    if(a > b) cout << ">" << endl;
    else if(a < b) cout << "<" << endl;
    else cout << "=" << endl;
  }
}
