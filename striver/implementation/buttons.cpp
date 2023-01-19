#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n; cin>>n;
  int sum=0, j=0;

  for (int i=n; i>1; i--) {
    sum += i;
    sum += j*(i-1);
    j++;
  }


  cout << sum+1 << endl;
	
  return 0;
}
