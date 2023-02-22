#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    vector<int> nums;
    vector<int> out;
    for (int i=0; i<n; i++) {
      nums.push_back(i);
    }

    // for (int i=n; i>1; i--) {
    //   int sum=0;
    //   if (nums[i] % 2 == nums[i-1] % 2) {
    //     out.push_back(nums[i]);
    //     out.push_back(nums[i-1]);
    //     sum = nums[i] + nums[i-1];
    //     nums.erase(nums.end());
    //   } else {
    //     out.push_back(nums[i]);
    //     out.push_back(nums[i-2]);
    //     sum = nums[i] + nums[i-2];
    //     nums.erase(nums.end());
    //     nums.erase(nums.end()-2);
    //   }
    //   nums.push_back(ceil(sum/2));
    // }
    // cout << ceil((nums[0]+nums[1])/2) << endl;
    // out.push_back(nums[0]);
    // out.push_back(nums[1]);

    // for (int i=0; i<out.size()-3; i+=2) {
    //   // cout << nums[i] << ' ' << nums[i+1] << endl;
    // }
  }
	
  return 0;
}
