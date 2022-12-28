#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string s, out="";
  getline(cin, s);
  int a=0, b=0, c=0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') { a++; }
    if (s[i] == '2') { b++; }
    if (s[i] == '3') { c++; }
  }
  while (a--) { out += "1+"; }
  while (b--) { out += "2+"; }
  while (c--) { out += "3+"; }

  cout << out.substr(0, out.length()-1);

  return 0;
}
