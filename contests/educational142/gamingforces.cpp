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
    int n; cin>>n;
    int num;
    int spells=0;
    int n1=0;

    for (int i=0; i<n; i++) {
      cin>>num;
      if (num == 1) n1++;
      if (num != 1) spells++; 
    }
    spells += n1 % 2;
    spells += n1 / 2;
    cout << spells << endl;
  }
	
  return 0;
}
