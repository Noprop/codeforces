#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t; cin>>t;

  while (t--) {
    int n; cin>>n;
    vector<ll> s(n+1);

    for (int i=0; i<n; i++) {
      int x;
      cin >> x;
      s[i+1] = s[i]+x;
    }
    ll ans=1;
    for (int i=1; i<n; i++) {
      ans = max(ans, __gcd(s[i], s[n]));
    }
    cout << ans << endl;
  }
	
  return 0;
}
