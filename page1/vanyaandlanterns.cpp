#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n,l;
  cin >> n >> l;
  double arr[1000] = { 0 };

  for (int i=0; i<n; i++) {
    int lamp;
    cin >> lamp;
    arr[i] = lamp;
  }

  sort(arr, arr + 1000);

  double mid=0;
  for (int i=1001-n; i<1000; i++) {
    mid = max((arr[i]-arr[i-1])/2, mid);
  }

  cout << fixed << max(max(arr[1000-n], mid), l-arr[999]);
	
  return 0;
}
