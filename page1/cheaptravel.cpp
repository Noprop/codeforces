#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n,m,a,b;
  int out=0;
  cin >> n >> m >> a >> b;
  bool isSingleCheaper = n*a < ceil(n/m)*b;
  if (isSingleCheaper) {
    cout << n*a;
    return 0;
  } else {
    while (n>m) {
      n -= m;
      out += b;
    }
    if ((n*a) > (b)) {
      out += b;
    } else {
      out += n*a;
    }
    cout << out;
  }
	
  return 0;
}
