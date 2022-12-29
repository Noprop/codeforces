#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int lim, bob, count=0;
  cin >> lim >> bob;

  while (lim <= bob) {
    lim *= 3;
    bob *= 2;
    count++;
  }

  cout << count;
	
  return 0;
}
