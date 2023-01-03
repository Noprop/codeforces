#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  
  int t;
  cin >> t;
  string out="";

  while (t--) {
    int n;
    cin >> n;
    char lastLamp;
    cin >> lastLamp;
    bool solved=false;
    
    for (int i=1; i<n; i++) {
      char lamp;
      cin >> lamp;
      if (solved) continue;

      if (lastLamp == 'R' && lamp == 'L') {
        out += "0\n";
        solved = true;
      } else if (lamp == 'R' && lastLamp == 'L') {
        out += to_string(i) + "\n";
        solved = true;
      } else if (i == n-1) {
        out += "-1\n";
      }
    }
  }
  cout << out;
	
  return 0;
}
