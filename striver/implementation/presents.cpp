#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int arr[100];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n;
  cin >> n;

  for (int i=1; i<=n; i++) {
    int num; cin >> num;
    arr[num-1] = i;
  }
  for (int i=0; i<n; i++) {
    cout << arr[i] << ' ';
  }
	
  return 0;
}
