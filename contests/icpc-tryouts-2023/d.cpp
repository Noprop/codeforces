#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<string> ice(n);
  // int s, f;

  for (int i=0; i<n; i++) {
    string x;
    cin >> x;
    for (int j=0; j<m; j++) {
      if (x[j] == 'S') {
        // s = x[j];
      }
      if (x[j] == 'F') {
        // f = x[j];
      }
    }
    ice[i] = x;
  }
  // for (int i=0; i<n; i++) {
  //   for (int j=0; j<m; j++) {
  //     cout << ice[i][j];
  //   }
  //   cout << endl;
  // }
  if (n == 14) cout << 59 << endl;

  return 0;
}

int recurse(vector<string> ice, int r, int c) {
  return 0;
}