#include<algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxVal = INT_MIN;
        if (nums.size() == 1)
            return nums[0];

        for (int x : nums) {
            currSum += x;

            maxVal = max(currSum, maxVal);
            if (currSum < 0)
                currSum = 0;
        }
        return maxVal;

    }
};