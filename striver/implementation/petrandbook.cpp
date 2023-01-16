#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n;
  cin >> n;
  vector<int> days;
  for (int i=0; i<7; i++) {
    int x; cin >> x;
    days.push_back(x);
  }

  while (1) {
    for (int i=0; i<7; i++) {
      n -= days[i];
      if (n <= 0) {
        cout << i + 1;
        return 0;
      }
    }
  }
	
  return 0;
}
