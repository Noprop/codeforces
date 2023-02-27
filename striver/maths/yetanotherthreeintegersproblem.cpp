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
        int out = abs(b-a);
        out = out%10 ? out/10 + 1 : out/10;

        cout << out << endl;
    }
	
    return 0;
}
