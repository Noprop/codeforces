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
        int maxN = max(max(x,y), z);
        int minN = min(min(x,y), z);
        int count=0;
        if (maxN == x) count++;
        if (maxN == y) count++;
        if (maxN == z) count++;

        if (count >= 2) {
            cout << "YES" << endl;
            cout << minN << " " << minN << " " << maxN << endl;
        } else {
            cout << "NO" << endl;
        }
    }
	
    return 0;
}
