#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int c, m, w, nans=0;
  cin >> c >> m >> w;

  while (nans < w) {
    nans++;
    m -= nans*c;
  }

  m > 0 ? cout << 0 : cout << abs(m);
	
  return 0;
}
