#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int high=1, n, last, count=1;
  cin >> n;
  cin >> last;
  n--;

  while (n--) {
    int cur;
    cin >> cur;
    if (last <= cur) {
      count++;
      high = max(high, count);
      last = cur;
    } else {
      count = 1;
      last = cur;
    }
  }

  cout << high;
	
  return 0;
}
