#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    ll n,m,k,max1,max2;
    cin>>n>>m>>k>>max1>>max2;
    if (max2 > max1) {
        max1 ^= max2;
        max2 ^= max1;
        max1 ^= max2;
    }

    for (int i=2; i<n; i++) {
        int x;
        cin >> x;
        if (x >= max1) {
            max2 = max1;
            max1 = x;
        } else if (x >= max2) {
            max2 = x;
        }
    }
    ll out = m/(k+1)*max1*k + m/(k+1)*max2 + m%(k+1)*max1;

    cout << out << endl;
	
    return 0;
}
