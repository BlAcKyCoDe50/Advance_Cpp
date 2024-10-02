#include "bits/stdc++.h"
using namespace std;

    vector<int> nextGreaterElements(vector<int> &nums)
{
    // cout<<nums[nums.size()-1];
    int n=nums.size();
    vector<int> ans(n,-1);
    for (int i = 0; i < nums.size(); i++)
    {
        bool isfind = false;
        for(int j=i+1;j<i+n;j++)
        {
            int idx = j%n;
            if(nums[idx]>nums[i])
            {
                ans[i] = nums[idx];
                break;
            }
        }
    }
    return ans;
}

main()
{
    vector<int> nums = {5,4,3,2,1};
    vector<int> ans = nextGreaterElements(nums);
    for (auto it : ans)
        cout << it << " ";
}