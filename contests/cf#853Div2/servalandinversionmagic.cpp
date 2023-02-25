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
        int n, diffCount=0;
        cin >> n;
        string bin;
        cin >> bin;

        int flag = bin[0] == bin[n-1];
        if (!flag) diffCount++;
        for (int i=1; i<n/2; i++) {
            if (diffCount == 2) break;
            if (flag && bin[i] != bin[n-i-1]) diffCount++;
            flag = bin[i] == bin[n-i-1];
        }
        diffCount < 2 ? cout << "Yes" : cout << "No";
        cout << endl;
    }
	
    return 0;
}
