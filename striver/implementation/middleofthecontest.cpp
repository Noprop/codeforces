#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  string s,f;
  cin >> s >> f;
  int hs = stoi(s.substr(0, 2));
  int ms = stoi(s.substr(3));
  int hf = stoi(f.substr(0, 2));
  int mf = stoi(f.substr(3));

  int start = hs*60 + ms;
  int end = hf*60 + mf;

  int mid = (end-start)/2;
  cout.fill('0');
  cout << setw(2) << (start+mid)/60;
  cout << ":";
  cout << setw(2) << (start+mid)%60 << endl;
	
  return 0;
}
