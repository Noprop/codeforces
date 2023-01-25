#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n; cin >> n;
  int sum=0;

  int sev=n/7;
  while (sev >= 0) {
    int csum = sev*7;
    int four=0;
    while (csum < n) {
      four++;
      csum += 4;
    }
    if (csum == n) {
      cout << string(four, '4') << string(sev, '7');
      return 0;
    }
    sev--;
  }
  cout << -1 << endl;
	
  return 0;
}
