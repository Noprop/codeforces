#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  string s;
  int n, out=0;
  getline(cin, s);
  n = stoi(s);
  getline(cin, s);

  for (int i = 0; i < n-1; i++) {
    if (s[i] != s[i+1]) {
      out++;
    }
  }

  cout << n-(out+1);

  return 0;
}
