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
    int out=0;
    string n;
    cin >> n;

    out = (n[0]-'0'-1)*10;
    if (n.length() == 1) out += 1;
    if (n.length() == 2) out += 3;
    if (n.length() == 3) out += 6;
    if (n.length() == 4) out += 10;

    cout << out << '\n';
    }
	
  return 0;
}
