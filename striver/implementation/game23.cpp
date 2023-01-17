#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n1, n2, count=0; cin>>n1>>n2;
  if (n2 % n1) {
    cout << -1;
    return 0; 
  }
  int num=n2/n1;
  while (num > 1) {
    if ((num % 3) && (num % 2)) {
      cout << -1;
      return 0;
    }
    count++;
    if (num % 3) {
      num /= 2;
    } else {
      num /= 3;
    }
  }
  cout << count << endl;

  return 0;
}
