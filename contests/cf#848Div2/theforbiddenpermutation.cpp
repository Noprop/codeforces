#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
    int T; cin >> T;

    while (T--) {
        int n,m,d, swaps=0;
        cin >> n >> m >> d;
        vector<int> nv(n);
        vector<int> mv(m);

        for (int i=0; i<n; i++) cin >> nv[i];
        for (int i=0; i<m; i++) cin >> mv[i];

        for (int i=0; i<m-1; i++) {
            int a1=mv[i]+1, a2=mv[i+1]+1;
            if (!(nv[a2] > (nv[a1]+d))) {
            // 5 4 3 2 1
            // 5 4 2 3 1
            // 5 2 4 3 1
            // 2 5 4 3 1
            // 2,5,4,3,1
            }
        }
        cout << swaps << endl;
    }

    return 0;
}
