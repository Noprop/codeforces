#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int st, m;
  cin>>st>>m;

  if (m > st) {
    cout << -1 << '\n';
    return 0;
  }
  st % 2 ? st = (st+1)/2 : st /= 2;
  while (st % m) st++;
  cout << st << '\n';
	
  return 0;
}
