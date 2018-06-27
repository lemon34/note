class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair;
        map<int, int> table;
        for (auto i : nums) {
            int num = nums[i];
            if (table.find(i) != table.end()) {
                pair.push_back(table[num]);
                pair.push_back(i);
                return pair;
            }else {
                table[target - num] = i;
            }
        }
        return pair;
    }
};
