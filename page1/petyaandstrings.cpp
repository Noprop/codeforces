#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string s1, s2;
  cin >> s1 >> s2;

  for (int i = 0; i < s1.length(); i++) {
    s1[i] = tolower(s1[i]);
    s2[i] = tolower(s2[i]);
  }

  cout << s1.compare(s2);

  return 0;
}
