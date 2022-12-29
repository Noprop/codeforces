#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  ll n,m, house=1, time=0;
  cin >> n >> m;

  while (m--) {
    int task;
    cin >> task;

    if (task > house) {
      time += task - house;
    }
    if (task < house) {
      time += n - house + task;
    }
    house = task;
  }

  cout << time;
	
  return 0;
}
