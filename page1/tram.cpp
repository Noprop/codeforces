#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, p=0;
  int maxP=0;
  cin >> n;

  while (n--) {
    int exit, enter;
    cin >> exit >> enter;

    p -= exit;
    p += enter;
    maxP = max(maxP, p);
  }

  cout << maxP;
	
  return 0;
}
