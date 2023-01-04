#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, num;
  cin >> n;
  while (n--) {
    cin >> num;
    if (num) {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";
	
  return 0;
}
