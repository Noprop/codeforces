#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

map<ll, ll> fac;

ll factorial(int n)
{
  auto search = fac.find(n);
  if (search != fac.end()) {
    return search->second;
  }
  ll factorial = 1;
  for (int i=1; i<=n; i++) {
    factorial *= i;
    if (fac.find(factorial) == fac.end()) {
      fac.insert({i, factorial});
    }
  }
  return factorial;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n; cin >> n;
    bool found=0;

    for (int i=n-1; i>1; i--) {
      ll sum=0;
      sum += factorial(i) + factorial(i-1);
      cout << "i: " << i << " fac i: " << factorial(i) << '\n';
      if (sum % n == 0) {
        cout << i << '\n';
        found=1;
        break;
      }
    }
    if (!found) {
      cout << -1 << '\n';
    }
  }
	
  return 0;
}


