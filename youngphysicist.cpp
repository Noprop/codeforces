#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  
  int n, x=0,y=0,z=0;
  cin >> n;

  while (n--) {
    int x2,y2,z2;
    cin >> x2 >> y2 >> z2;

    x += x2;
    y += y2;
    z += z2;
  }

  if (x == 0 && y == 0 && z == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
	
  return 0;
}
