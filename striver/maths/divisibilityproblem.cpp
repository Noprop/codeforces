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
        int a,b;
        cin>>a>>b;

        a%b ? cout << b-(a%b) : cout << 0;
        cout << endl;
    }
	
    return 0;
}
