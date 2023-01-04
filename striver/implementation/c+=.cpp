#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a,b,c, count=0;
    cin >> a >> b >> c;

    while (a <= c && b <= c) {
      count++;
      if (a < b) {
        a = a + b;
      } else {
        b = b + a;
      }
    }

    cout << count;
    cout << '\n';
  }
	
  return 0;
}
