#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t; cin >> t;
  
  while (t--) {
    int a,b,c;
    cin>>a>>b>>c;

    ll price_per_single_donut = a;
    ll price_per_donut = c/b;
    ll price_per_box = c;
    
    if (price_per_box <= price_per_single_donut) {
      cout << "-1 " << b << endl;
      continue;
    }
    if (price_per_single_donut <= price_per_donut) {
      cout << "1 " << "-1" << endl;
      continue;
    }

    ll sum_single=price_per_single_donut*b;
    ll sum_box=price_per_box;
    ll i=b;
    while (sum_box > sum_single) {
      i += b;
      sum_box += price_per_box;
      sum_single += price_per_single_donut*b;
    }
    cout << "1 " << i << endl;
  }
	
  return 0;
}
