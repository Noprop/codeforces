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
        int sumE=0;
        int sumO=1;
        cin >> n;

        if ((n/2) % 2) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i=1; i<=n/2; i++) {
            cout << i*2 << " ";
            sumE += i*2;
        }
        cout << 1 << " ";
        for (int i=1; i<n/2-1; i++) {
            cout << i*2+1 << " ";
            sumO += i*2+1;
        }
        cout << sumE-sumO << endl;
    }
	
    return 0;
}
