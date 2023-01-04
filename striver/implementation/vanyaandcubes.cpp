#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n;
  int count=0, row=0;
  cin >> n;

  for (int i=1; i<=10000; i++) {
    row += i;
    count += row;
    if (count > n) {
      cout << i-1;
      break;
    }
  }
	
  return 0;
}
