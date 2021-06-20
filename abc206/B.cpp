#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main()
{
  ll n; cin >> n;
  ll i = 1;
  ll co = 0;
  while(1){
    co += i;
    if(co >= n) break;
    i++;
  }
  cout << i << endl;
}
