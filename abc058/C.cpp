#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// 文字コードの利用
// char→int int(c-'a')
// char数える c = 'a' + i

int main()
{
  ll n; cin >> n;
  vector<vector<ll>> C(50, vector<ll>(26));
  rep(i, n) {
    string s; cin >> s;
    for(char c : s) C[i][c-'a']++;
  }
  string ans = "";
  rep(i, 26) {
    ll minc = mod;
    rep(j, n) minc = min(minc, C[j][i]);
    
    char c = 'a' + i;
    rep(j, minc) ans += c;
  }
  cout << ans << endl;
}
  
