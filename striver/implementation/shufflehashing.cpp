#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int T; cin >> T;

  while (T--) {
    string p, h;
    cin >> p >> h;
    if (p.length() > h.length()) {
      cout << "NO" << endl;
      continue;
    }

    vector<int> cntp(26);
    vector<int> cnth(26);
    for (int i=0; i<p.length(); i++) {
      cntp[p[i] - 'a']++;
      cnth[h[i] - 'a']++;
    }
    for (int i=p.length(); i<h.length(); i++) {
      if (cntp == cnth) break;
      cnth[h[i] - 'a']++;
      cnth[h[i-p.length()] - 'a']--;
    }

    cntp == cnth ? cout << "YES" : cout << "NO";
    cout << endl;

    }
	
  return 0;
}
