#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int low=0, high=0;
  string s;
  string lower="", upper="";
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    isupper(s[i]) ? high++ : low++;
    lower += tolower(s[i]);
    upper += toupper(s[i]);
  }

  if (high > low) {
    cout << upper;
  } else {
    cout << lower;
  }
	
  return 0;
}
