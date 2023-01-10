#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int l; string s; cin >> l >> s;
  int i=0;
  int tot=0;
  string out="";

  while (tot < l) {
    out += s[tot];
    i++;
    tot+=i;
  }
  
  cout << out;

  return 0;
}
