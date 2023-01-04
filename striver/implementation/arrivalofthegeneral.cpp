#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int arr[100];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
  int n;
  int max=0, min=0;
  cin >> n;

  for (int i=0; i<n; i++) {
    int num;
    cin >> num;
    arr[i] = num;
    if (num > arr[max]) {
      max = i;
    }
    if (num <= arr[min]) {
      min = i;
    }
  }
  if (max < min) {
    cout << max + n-min-1;
  } else {
    cout << max + n-2-min;
  }


  return 0;
}
