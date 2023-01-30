#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string an; int T;
  cin >> an >> T;

  unordered_map<char, int> an1;
  for (int i=0; i<an.length(); i++) {
    an1[an[i]]++;
  }
  while (T--) {
    unordered_map<char, int> an2;
    string s;
    cin >> s;

    for (int i=0; i<s.length(); i++) {
      an2[s[i]]++;
    }
    if (an1 == an2) {
      cout << s;
    }
  }
	
  return 0;
}
