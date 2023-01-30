#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int T;
  cin >> T;
  ll out=0;

  while (T--) {
    int r; cin >> r;
    int corner=0;
    for (int i=r; i>=1; i--) {
      for (int j=r; j>=1; j--) {
        float pytha = sqrt((pow(i, 2) + pow(j, 2)));
        if (pytha <= r) {
          corner += r-(r-j);
          break;
        }
      }
    }
    out += corner*4;
    out += 1;
    out += r*4;
  }
  cout << out%1000000007 << endl;

  return 0;
}