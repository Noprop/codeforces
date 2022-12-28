#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int t;
  cin >> t;

  while (t--) {
    string s;
    int len;
    cin >> s;
    len = s.length();
    if (len <= 10) {
      cout << s;
      cout << "\n";
    } else {
      cout << s[0] + to_string(len-2) + s[len-1];
      cout << "\n";
    }
  }

  return 0;
}
