#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string s;
  cin >> s;

  for (int i=1; i<=5; i++) {
    string c;
    cin >> c;

    if (s[0] == c[0] || s[1] == c[1]) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
