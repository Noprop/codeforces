#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int m, n;
  int tot = 0;
  cin >> m >> n;

  if (m % 2) {
    tot += floor(n/2);
  }
  tot += (m/2 * n);

  cout << tot;

  return 0;
}
