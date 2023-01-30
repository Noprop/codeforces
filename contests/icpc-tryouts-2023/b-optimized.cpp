#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int T; cin >> T;

  while (T--) {
    int r; cin >> r;
    int count=0;

    for(int i=0; i<=r; i++) {   
      double ans = sqrt(pow(r,2)-pow(i,2));
      int intAns = sqrt(pow(r,2)-pow(i,2));
      if (intAns == ans) count++;
    }
    cout << count << endl;
  }
	
  return 0;
}
