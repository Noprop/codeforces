#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int m,n;
  cin >> m >> n;

  for (int i=1; i<=m; i++) {
    for (int j=1; j<=n; j++) {
      if (i % 2) {
        cout << "#";
      } else {
        if ((i % 4) && j == n) {
          cout << "#";
        } else {
          if (j == 1 && ((i % 4) == 0)) {
            cout << "#";
          } else {
            cout << ".";
          }
        }
      }
    }
    cout << '\n';
  }
	
  return 0;
}
