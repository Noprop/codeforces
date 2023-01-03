#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

ll arr[200000];
ll tot[200000];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int t;
  cin >> t;

  while (t--) {
    int n,m, count=0, lp=0;
    ll in;
    cin >> n >> m >> in;
    m--;
    arr[0] = in;
    tot[0] = in;

    for (int i=1; i<n; i++) {
      cin >> in;
      arr[i] = in;
      tot[i] = in + tot[i-1];
      if (i < m) {
        lp = min(tot[i], tot[lp]);
      }
    }

    int sub=tot[m];
    if (tot[lp] < tot[m]) {
      for (int i = m; i > lp; i--) {
        if (arr[i] > 0) {
          arr[i] = -1*arr[i];
          tot[m] = -1*arr[i];
          if (tot[m] < tot[lp]) {
            lp = m;
            break;
          }
        }
      }
    }
    sub = sub - tot[m];
    for (int i = m; i < n; i++) {
      tot[i] -= sub;
      if (tot[i] < tot[m]) {
        for (int i = m; i > lp; i--) {
          if (arr[i] > 0) {
            arr[i] = -1*arr[i];
            tot[m] = -1*arr[i];
            if (tot[m] < tot[lp]) {
              lp = m;
              break;
            }
        }
      }
      }
    }
  }

  return 0;
}
