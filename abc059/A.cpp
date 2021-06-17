#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// 大文字と小文字のコードの差を利用することが可能
int main()
{
  string s1, s2, s3; cin >> s1 >> s2 >> s3;
  ll dif = 'A' - 'a';
  cout << (char)(s1[0] + dif) << (char)(s2[0] + dif) << (char)(s3[0] + dif) << endl;
}
  
