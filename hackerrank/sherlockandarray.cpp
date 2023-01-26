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
    int n; cin >> n;
    vector<int> arr(n+1);

    for (int i=0; i<n; i++) {
      int x; cin >> x;
      arr[i+1] = arr[i]+x;
    }

    int flag=1;
    for (int i=1; i<n+1; i++) {
      if (arr[i-1] == arr[n]-arr[i]) {
        cout << "YES" << endl;
        flag = 0; break;
      }
    }
    if (flag) {
      cout << "NO" << endl;
    }
  }

  return 0;
}
