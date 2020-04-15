class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> LP(n), RP(n), output(n);

        LP[0] = RP[n - 1] = 1;

        for (int i = 1; i < n; i++) {
            LP[i] = LP[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            RP[i] = RP[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            output[i] = LP[i] * RP[i];
        }

        return output;
    }
};