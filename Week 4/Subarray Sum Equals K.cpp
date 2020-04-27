class Solution
{
public:
  int subarraySum(vector<int> &nums, int k)
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = nums.size();
    if (n == 0)
      return 0;

    unordered_map<int, int> mymap; // Key = PrefixSum, Value = Count of PrefixSum
    int currSum = 0;
    int i = 0;
    int count = 0;

    while (i < n)
    {
      currSum += nums[i];

      if (currSum == k)
        count++;

      if (mymap.end() != mymap.find(currSum - k))
        count += mymap[currSum - k];

      mymap[currSum]++;
      i++;
    }
    return count;
  }
};