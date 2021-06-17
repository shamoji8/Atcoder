#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  string a, b, c; cin >> a >> b >> c;
  if(a[a.size()-1] == b[0] && b[b.size()-1] == c[0]) cout << "YES" << endl;
  else cout << "NO" << endl;
}
