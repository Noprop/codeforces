#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, q;
  cin >> n >> q;
  vector<vector<int>> comps(n+1);
  vector<int> wins(n+1);
  
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    vector<int> myRow(2);
    myRow[0] = x;
    myRow[1] = i;
    comps[i] = myRow;
    wins[i] = 0;
  }
  vector<int> myRow(2);
  myRow[0] = -1;
  myRow[1] = -1;
  comps[n] = myRow;

  vector<int> winsOld = wins;
  vector<vector<int>> compsOld = comps;

  while (q--) {
    int id;
    ll matches;
    cin >> id >> matches;
    wins = winsOld;
    comps = compsOld;
    while (matches--) {
      if (comps[0][0] > comps[1][0]) {
        wins[comps[0][1]]++;
        comps[n][0] = comps[1][0];
        comps[n][1] = comps[1][1];
        comps.erase(next(comps.begin()));
      } else {
        wins[comps[1][1]]++;
        comps[n][0] = comps[0][0];
        comps[n][1] = comps[0][1];
        comps.erase(comps.begin());
      }
      comps.push_back(myRow);
    }
    cout << wins[id-1] << endl;
  }
	
  return 0;
}
