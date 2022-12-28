#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n=0, m=0;
  bool found = false;
  int num;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> num;
      if (num != 0) {
        m = i;
        n = j;
        found = true;
        break;
      }
    }
    if (found) { break; }
  }

  int diff = abs(2 - m) + abs(2 - n);
  cout << diff;

  return 0;
}
