#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int t, x=0;
  cin >> t;
  string s;
  
  while (t--) {
    cin >> s;
    s[1] == '+' ? x++ : x--;
  }
  
  cout << x;

  return 0;
}
