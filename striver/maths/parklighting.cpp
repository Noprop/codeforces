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
        cin >> n >> m;

        cout << (n/2*m)+(n%2*(m/2+m%2)) << endl;
    }
	
    return 0;
}
