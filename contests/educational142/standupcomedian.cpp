#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t;
  cin>>t;

  while (t--) {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mi = min(b,c);
    int ma = max(b,c);

    if (a > 0) {
      cout << a+(mi*2)+min(a+1, d+(ma-mi)) << endl;
    } else {
      cout << min(1, b+c+d) << endl;
    }

  }
	
  return 0;
}
