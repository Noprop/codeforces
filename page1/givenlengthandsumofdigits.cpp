#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int len, sum;
  string small="", big="";
  cin >> len >> sum;
  if (sum == 0) {
    cout << "-1 -1";
    return 0;
  }

  int cSum = sum-1;
  for (int n = 0; n < len; n++) {
    for (int i = 9; i > 0; i--) {
      if (cSum == 0) {
        small.insert(0, "0");
        break;
      }
      if (cSum - i >= 0) {
        small.insert(0, to_string(i));
        cSum -= i;
        break;
      }
    }
  }
  if (small[0] == '0') {
    small[0] = '1';
  } else {
    int a = small[0];
    small[0] = a + 1;
  }
  if (cSum > 0) {
    cout << "-1 -1";
    return 0;
  }

  cSum = sum;
  for (int n = 0; n < len; n++) {
    for (int i = 9; i > 0; i--) {
      if (cSum == 0) {
        big += '0';
        break;
      }
      if (cSum - i >= 0) {
        big += to_string(i);
        cSum -= i;
        break;
      }
    }
  }

  if (cSum > 0) {
    cout << "-1 -1";
    return 0;
  } 

  if (small.length() != len || big.length() != len) {
    cout << "-1 -1";
  } else {
    cout << small << " ";
    cout << big;
  }

  return 0;
}
