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
        int n;
        int oFlag=0, eFlag=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            int x; cin >> x;
            x % 2 ? oFlag = 1 : eFlag = 1;
        }
        if (oFlag && eFlag) {
            cout << "YES";
        } else if (!oFlag && eFlag) {
            cout << "NO";
        } else if (oFlag && !eFlag) {
            n % 2 ? cout << "YES" : cout << "NO";
        }
        cout << endl;
    }
	
    return 0;
}
