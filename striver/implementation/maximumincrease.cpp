#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t, count=1, curCount=1;
  cin >> t;
  t--;
  int last;
  cin >> last;

  while (t--) {
    int n; cin >> n;
    if (n > last) {
      curCount++;
      count = max(curCount, count);  
    } else {
      curCount = 1;
    }
    last = n;
  }
  cout << count;
	
  return 0;
}
