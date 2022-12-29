#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n, out=0;
  cin >> n;

  for (int i = 5; i > 0; i--) {
    out += floor(n/i);
    n %= i;
  }
  cout << out;

  return 0;
}
