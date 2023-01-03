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
    string s;
    string out="";
    int count=0;
    cin >> s;
    int len = s.length();
    for (int i=len-1; i>=0; i--) {
      if (s[i] != '0') {
        count++;
        out += s[i] + string(len-1-i, '0') + ' ';
      }
    }
    cout << count << '\n';
    cout << out << '\n';
  }

  return 0;
}
