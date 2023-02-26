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
        int x,y,z;
        cin>>x>>y>>z;

        int md = z%x;
        if (md >= y) {
            cout << z-(md-y) << endl;
            continue;
        }
        cout << (z-md)-(x-y) << endl;
    }
	
    return 0;
}
