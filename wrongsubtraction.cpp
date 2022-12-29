#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  ll k;
  int n;
  string s="";
  cin >> k;
  cin >> n;

  while (n--) {
    s = to_string(k);
    if (s[s.length()-1] == '0') {
      k /= 10;
    } else {
      k -= 1;
    }
  }

  cout << k;
	
  return 0;
}
