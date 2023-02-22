#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int T; cin >> T;
    int test =0;

    while (T--) {
        int n; cin >> n;
        int last=0;
        int flag=0;
        int flagneg=0;
        cin >> last;
        int sum = last;

        for (int i=1; i<n; i++) {
            int x; cin >> x;
            sum += x;
            if (x == -1 || last == -1) flagneg=1;
            if (x == -1 && last == -1 && !flag) {
                sum+=4;
                flag=1;
            }
            last = x;
        }
        if (!flag && !flagneg) sum-=4;
        cout << sum << endl;
    }
	
    return 0;
}
