#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// 条件確認不足
int main()
{
  string o, e; cin >> o >> e;
  ll counto = 0, counte = 0;
  ll sizeo = o.size(), sizee = e.size();
  
  while(1) {
    if(counto < sizeo) cout << o[counto];
    if(counte < sizee) cout << e[counte];
    if(counto >= sizeo && counte >= sizee) break;
    counto++;
    counte++;
  }
  cout << endl;
}
