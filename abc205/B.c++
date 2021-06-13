#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n; cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());
  bool flag = true;
  rep(i,n){
    if(a[i] != i+1) flag = false;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
