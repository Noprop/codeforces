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
        float n, x;
        cin >> n >> x;
        if (n == 1 || n == 2) {
            cout << 1 << endl;
            continue;
        }
        n -= 2;

        cout << ceil(n/x) + 1 << endl;
    }
	
    return 0;
}
