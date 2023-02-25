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
        int n,m;
        cin>>n>>m;

        if (n == 1) cout << 0;
        if (n == 2) cout << m;
        if (n >= 3) cout << m*2;
        cout << endl;
    }
	
    return 0;
}
