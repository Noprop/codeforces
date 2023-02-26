#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int x,y, i=1;
    cin>>x>>y;

    while ((i*x-y)%10 != 0 && (i*x)%10 != 0) i++;
    cout << i << endl;

    return 0;
}
