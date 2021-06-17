#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// 解説確認済み　もう少し考えれば気付けたかな…
int main()
{
  ll n; cin >> n;
  ll sum1 = 0, sum2 = 0;
  ll co1 = 0, co2 = 0;
  rep(i, n) {
    ll x; cin >> x;
    sum1 += x; sum2 += x;
    if(i % 2 == 0) {
      if(sum1 <= 0) {
        co1 += 1 - sum1;
        sum1 = 1;
      }
      if(sum2 >= 0){
        co2 += sum2 + 1;
        sum2 = -1;
      }
    } else {
      if(sum1 >= 0){
        co1 += sum1 + 1;
        sum1 = -1;
      }
      if(sum2 <= 0) {
        co2 += 1 - sum2;
        sum2 = 1;
      }
    }
  }
  cout << min(co1, co2) << endl;
}
        
