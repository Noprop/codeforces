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
    int m, n, count=0;
    string s;
    cin >> m >> n;

    for (int i=0; i<m; i++) {
      cin >> s;
      if (s[n-1] == 'R') count++;
    }
    for (int i=0; i<n; i++) {
      if (s[i] == 'D') count++;
    }

    cout << count << '\n';
  }

  return 0;
}
