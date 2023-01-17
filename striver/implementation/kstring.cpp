#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n, arr[26]={};
  string s, rep="", ans="";
  cin>>n>>s;

  for (char ch:s) arr[ch-'a']++;
  for (int i=0; i<26; i++) {
    if (arr[i]%n) {
      cout << -1 << endl;
      return 0;
    }
    if (arr[i]) for (int j=0; j<arr[i]/n; j++) rep += i+'a';
  }
  for (int i=0; i<n; i++) ans += rep;
  cout << ans << endl;

  return 0;
}
