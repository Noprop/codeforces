#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, k, count=0;
  string intout="";
  cin >> n >> k;
  vector<int> instr(n);
  unordered_map<int, vector<int>> instr_map;

  for (int i=0; i<n; i++) {
    cin >> instr[i];
    instr_map[instr[i]].push_back(i);
  }
  sort(instr.begin(), instr.end());

  for (int i=0; i<n; i++) {
    int instrumentDays = instr[i];
    k -= instrumentDays;
    if (k <= 0) break;
    cout << "instrumentDays: " << instrumentDays << endl;
    cout << "instr_map[instrumentDays].size(): " << instr_map[instrumentDays].size() << endl;

    continue;
    intout += instr_map[instrumentDays][0] + ' ';
    instr_map[instrumentDays].erase(instr_map[instrumentDays].begin());
    count++;
  }
  if (count == 0) {
    cout << 0 << endl;
  } else {
    cout << count << endl << intout << endl;
  }

	
  return 0;
}
