#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n,x,y;
  cin>>n>>x>>y;
  int arr[n];
  vector<pair<int, int>> rainy;

  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }

  for (int i=0; i<n; i++) {
    int low = arr[i];
    int lowCount = 0;
    for (int l=i-x; l<i; l++) {
      if (l < 0) continue;
      if (arr[l] <= low) lowCount++;
    }
    for (int r=i+1; r<=i+y; r++) {
      if (r > n-1) break;
      if (arr[r] <= low) lowCount++;
    }
    if (lowCount == 0) {
      cout << i+1 << endl;
      return 0;
    }
  }

  return 0;
}
