#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  double a,b,c;
  cin >> a >> b >> c;
  cout << max(max(a, b), c) - min(min(a, b), c);
	
  return 0;
}
