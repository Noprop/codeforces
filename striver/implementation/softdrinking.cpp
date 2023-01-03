#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  double a,b,c,d,e,f,g,h;
  cin >> a >> b >> c >> d >> e >> f >> g >> h;

  double a1 = b*c;
  a1 = floor(a1/g);

  double b2 = d*e;

  double c3 = floor(f/h);

  cout << floor(min(min(a1, b2), c3)/a);
	
  return 0;
}
