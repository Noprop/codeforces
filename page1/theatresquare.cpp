#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  double n, m;
  int a;
  cin >> n >> m >> a;

  n = ceil(n/a);
  m = ceil(m/a);
  ll out = n * m;

  cout << out;

  return 0;
}
