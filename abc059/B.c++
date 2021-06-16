#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

// もう少しきれいなやり方ありそう…(主に比較部分)
int main()
{
  string a, b; cin >> a >> b;
  ll sizea, sizeb;
  sizea = size(a); sizeb = size(b);
  if(sizea > sizeb) cout << "GREATER" << endl;
  else if(sizea < sizeb) cout << "LESS" << endl;
  else {
    bool flag = true;
    rep(i, sizea) {
      if(a[i] - '0' > b[i] - '0') {
        flag = false;
        cout << "GREATER" << endl;
        break;
      }
      else if(a[i] - '0' < b[i] - '0') {
        flag = false;
        cout << "LESS" << endl;
        break;
      }
    }
    if(flag) cout << "EQUAL" << endl;
  }
}
