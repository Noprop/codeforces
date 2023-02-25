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
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxN = max(max(a,b),c);
        n -= maxN-a;
        n -= maxN-b;
        n -= maxN-c;
        if (n < 0) {
            cout << "NO" << endl;
            continue;
        }
        if (n % 3) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
	
    return 0;
}
