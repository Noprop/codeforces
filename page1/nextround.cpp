#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n, k, v;
  int out = 0;
  cin >> n >> k;

  while (k-- && n--) {
    cin >> v;  
    if (v == 0) {
      cout << out;
      return 0;
    }
    out++;
  }

  n = v;
  while (cin >> v) {
    if (v != n) {
      break;   
    }
    out++;
  }

  cout << out;

  return 0;
}
