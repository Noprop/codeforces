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
    int n; cin >> n;
    int m = n*2;
    int arr[m];

    for (int i=0; i<m; i++) {
      cin >> arr[i];
    }
    sort(arr, arr+m);

    cout << abs(arr[n-1]-arr[n]) << endl;
  }

  return 0;
}
