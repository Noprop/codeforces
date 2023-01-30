#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int x; cin >> x;
  ll out=0;

  while (x--) {
    int r; cin >> r;

    out += (pow(r, 2))*0.25*4;
    out += (r*4)+1;
  }
  cout << out << endl;

	
  return 0;
}
