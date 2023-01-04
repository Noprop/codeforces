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
    int one=-1,last=-1,count=0;
    cin >> s;

    for (int i=0; i<s.length(); i++) {
      if (s[i] == '1' && one == -1) {
        one = i;
        last = i;
      }
      if (s[i] == '1' && one != -1) {
        last = i;
      }
    }
    for (int i=one; i<=last; i++) {
      if (s[i] == '0') count++; 
    }
    cout << count << '\n';
  }
	
  return 0;
}
