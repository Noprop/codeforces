#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string n;
  cin >> n;
  if (n[0] > '4' && n[0] < '9') {
    n[0] = '9' - n[0] + '0';
  }

  for (int i=1; i < n.length(); i++) {
    if (n[i] > '4') n[i] = '9' - n[i] + '0';
  }
  cout << n;
	
  return 0;
}
