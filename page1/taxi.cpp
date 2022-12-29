#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n;
  double out=0;
  map<int, int> groups;
  groups.insert({1, 0});
  groups.insert({2, 0});
  groups.insert({3, 0});
  groups.insert({4, 0});
  cin >> n;

  while (n--) {
    int cur;
    cin >> cur;
    groups[cur] += 1;
  }

  out += groups[4];
  out += groups[3];
  out += groups[2] / 2 + (groups[2] % 2);
  groups[1] -= groups[3];
  if (groups[2] % 2) groups[1] -= 2;
  if (groups[1] > 0) {
    out += groups[1]/4;
    groups[1] = groups[1]%4;
    if (groups[1] > 0) out++;
  }

  cout << out;

  return 0;
}
