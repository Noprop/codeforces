#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string s; cin>>s;
  string input=s;

  s[0] = isupper(s[0]) ? tolower(s[0]) : toupper(s[0]);
  for (int i=1; i<s.length(); i++) {
    if (islower(s[i])) {
      cout << input << endl;
      return 0;
    }
    s[i] = tolower(s[i]);
  }
  
  cout << s << endl;
	
  return 0;
}
