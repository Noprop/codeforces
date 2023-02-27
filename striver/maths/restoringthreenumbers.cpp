#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maxN = max(max(a,b), max(c,d));

    if (maxN-a) cout << maxN-a << " ";
    if (maxN-b) cout << maxN-b << " ";
    if (maxN-c) cout << maxN-c << " ";
    if (maxN-d) cout << maxN-d << " ";
    cout << endl;

    return 0;
}
