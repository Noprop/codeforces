#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  string s;
  int count = 1;
  getline(cin, s);
  char cur = s[0];

  for (int i = 1; i < s.length(); i++) {
    if (cur == s[i]) {
      count++;
    } else {
      count = 1;
      cur = s[i];
    }
    if (count >= 7) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}
