#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  set<char> unq;
  string s;
  int count = 0;
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if (unq.find(s[i]) == unq.end()) {
      count++;
      unq.insert(s[i]);
    }
  }
  
  if (count % 2) {
    cout << "IGNORE HIM!";
  } else {
    cout << "CHAT WITH HER!";
  }
	
  return 0;
}
