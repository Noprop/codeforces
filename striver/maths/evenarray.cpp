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
        int n, wrongE=0, wrongO=0;
        cin >> n;

        for (int i=0; i<n; i++) {
            int x; cin >> x;
            if (i % 2 && (x % 2 == 0)) wrongO++;
            if (!(i % 2) && x % 2) wrongE++;
        }
        (wrongO == wrongE) ? cout << wrongE : cout << -1;
        cout << endl;
    }
	
    return 0;
}
