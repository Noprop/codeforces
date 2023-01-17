#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int in; cin >> in;
  int n=in*2+1;

  for (int i=0; i<n; i++) {
    int len = i <= in ? i*2+1 : (n-i)*2-1;
    for (int j=0; j<(n-len)/2; j++) {
      cout << "  ";
    }
    for (int j=0; j<len/2; j++) {
      cout << j << ' ';
    }
    for (int j=len/2; j>=0; j--) {
      if (j == 0) {
        cout << j << '\n';
        continue;
      }
      cout << j << ' ';
    }
  }


  return 0;
}