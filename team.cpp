#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int t;
  cin >> t;

  int out = 0;
  while (t--) {
    int tot = 0;
    int temp;
    for (int i = 0; i < 3; i++) {
      cin >> temp;
      tot += temp;
    }
    if (tot >= 2) {
      out += 1;
    }
  }

  cout << out;
  cout << "\n";

  return 0;
}
