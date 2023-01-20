#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, t;
  cin>>n>>t;
  int arr[n-1], i=0;
  int n2 = n-1;

  n--;
  while (n--) {
    cin >> arr[i];
    i++;
  }

  i = 0;
  while (i < n2) {
    i += arr[i];
    if (i+1 == t) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
	
  return 0;
}
