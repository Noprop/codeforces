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
    cin >> n;
    cin >> s;
    int low=-1,high=-1;
    
    for (int i=0; i<n; i++) {
      if (s[i] == '1' && low == -1) low = i;
      if (s[i] == '1') high = i;
    }

    if (high == -1) {
      cout << n << endl;
    } else {
      cout << n*2 - (min(low, n-1-high)*2) << endl;
    }
  }
	
  return 0;
}
