#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  string s, out="";
  string vowels="AOYEUIaoyeui";
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if (vowels.find(s[i]) == string::npos) {
      out += ".";
      out += tolower(s[i]);
    }
  }

  cout << out;

  return 0;
}
