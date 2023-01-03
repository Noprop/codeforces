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
    int n;
    cin >> n;
    if (n % 2) {
      cout << "NO\n";
      continue;
    }
    cout << "YES\n";
    for (int i = 1; i<=n; i++) {
      i % 2 ? cout << "1 " : cout << "-1 ";
    }
    cout << "\n";
  }
	
  return 0;
}
