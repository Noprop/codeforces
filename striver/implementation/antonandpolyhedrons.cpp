#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, count=0;
  map<string, int> poly;
  poly["Tetrahedron"] = 4;
  poly["Cube"] = 6;
  poly["Octahedron"] = 8;
  poly["Dodecahedron"] = 12;
  poly["Icosahedron"] = 20;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;
    count += poly[s];
  }

  cout << count;
	
  return 0;
}
