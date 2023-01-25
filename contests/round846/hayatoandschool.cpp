#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t; cin>>t;

  while (t--) {
    int n; cin>>n;
    vector<int> odd;
    vector<int> even;
    int flag=0;

    for (int i=0; i<n; i++) {
      int num; cin>>num;
      if (flag) continue;
      if (num % 2) {
        odd.push_back(i+1);
      } else {
        even.push_back(i+1);
      }
      if (odd.size() >= 1 && even.size() >= 2) {
        cout << "YES" << endl << odd[0] << ' ' << even[0] << ' ' << even[1] << ' ' << endl;
        flag = 1; continue;
      }
      if (odd.size() >= 3) {
        cout << "YES" << endl << odd[0] << ' ' << odd[1] << ' ' << odd[2] << ' ' << endl;
        flag = 1;
      }
    }
    if (!flag) {
      cout << "NO" << endl;
    }
  }
	
  return 0;
}
