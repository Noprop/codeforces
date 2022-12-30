#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int arr[100001];
ll dp[100001];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, cur;
  cin >> n;

  while (n--) {
    cin >> cur;
    arr[cur]++;
  }
  dp[0] = 0;
  dp[1] = arr[1];

  for (int i=2; i<100001; i++) {
    dp[i] = max(dp[i-1], dp[i-2]+arr[i]*1ll*i);
  }

  cout << dp[100000];

  return 0;
}
