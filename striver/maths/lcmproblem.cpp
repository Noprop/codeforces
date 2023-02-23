#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int a,b;
        cin >> a >> b;
        if (a*2 > b) {
            cout << "-1 -1" << endl;
        } else {
            cout << a << " " << a*2 << endl;
        }
    }
	
    return 0;
}
