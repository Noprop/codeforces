#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n; cin>>n;
  ll arr[n];

  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }

  ll sum = arr[n-1];
  ll high = sum-1;
  n--;
  while (n--) {
    sum += high >= arr[n] ? arr[n] : high;
    int oldhigh=high;
    high = min(arr[n]-1, high);
    if (oldhigh == high) high--;
    if (high <= 0) {
      cout << sum << endl;
      return 0;
    }
  }
  cout << sum << endl;

  return 0;
}
