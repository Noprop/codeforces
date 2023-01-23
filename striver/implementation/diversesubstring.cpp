#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n;
  string s;
  cin>>n>>s;

  char last = s[0];
  for (int i=1; i<n; i++) {
    if (s[i] != last) {
      cout << "YES" << endl << last << s[i] << endl;
      return 0;
    }
    last = s[i];
  }

  cout << "NO" << endl; 
  return 0;
}
