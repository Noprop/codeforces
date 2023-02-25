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
        int n, flag=0;
        cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for (int i=0; i<n; i++) {
            if (flag) break;
            for (int j=i+1; j<n; j++) {
                int gcdN = gcd(arr[i], arr[j]);
                if (gcdN == 1 || gcdN == 2) flag = 1;
            }
        }
        flag ? cout << "YES" : cout << "NO";
        cout << endl;
    }
	
    return 0;
}
