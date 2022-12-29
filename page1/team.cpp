#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t, n, a, b, c;
  cin >> t;
  n = 0;

  while (t--) {
    cin >> a >> b >> c;
    a + b + c >= 2 ? n++ : n;
  }

  cout << n;

  return 0;
}
