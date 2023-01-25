#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int T;
  cin >> T;

  while (T--) {
    int n;
    string s;
    cin >> n >> s;

    bool flag=1;
    for (int i=0; i<n/2; i++) {
      int j = n-1-i;
      int diff = abs(int(s[i]) - int(s[j]));
      if (diff > 2 || diff == 1) {
        cout << "NO" << endl;
        flag=0; break;
      }
    }
    if (flag) {
      cout << "YES" << endl;;
    }
  }

  return 0;
}
