class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair;
        map<int, int> table;
        for (size_t i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (table.find(num) != table.end()) {
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
