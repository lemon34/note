class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int array_H = array.size();
        int array_W = array[0].size();
        for (int i = array_H - 1, j = 0; i >= 0&& j < array_W;) {
                if (target < array[i][j]) {
                    i--;
                    continue;
                } else if (target > array[i][j]) {
                    j++;
                    continue;
                } else {
                    return true;
                }
        }
        return false;
    }
};
