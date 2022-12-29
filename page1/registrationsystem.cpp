#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int n;
  map<string, int> names;
  cin >> n;

  while (n--) {
    string name;
    cin >> name;

    if (names.find(name) != names.end()) {
      names[name] += 1;
      cout << name + to_string(names[name]);
      cout << "\n";
    } else {
      names.insert({name, 0});
      cout << "OK";
      cout << "\n";
    }
  }
	
  return 0;
}
