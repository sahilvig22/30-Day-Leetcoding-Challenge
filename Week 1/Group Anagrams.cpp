class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dic;

        for (auto str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            dic[key].push_back(str);
        }
        vector<vector<string>> result;
        for (auto& i : dic) {
            result.push_back(i.second);
        }
        return result;
    }
};