/*************************************************************************
	> File Name: find_min_in_rotatearray.cpp
	> Author: fuhailong
	> Mail: 
	> Created Time: 2018年07月24日 星期二 21时33分38秒
 ************************************************************************/
#include<iostream>
# include <vector>
int find_min(std::vector<int>& nums, int start, int end);
int FindMin(std::vector<int>& nums, int start, int end);
int main() {
//    std::vector<int> nums{3, 4, 5, 1, 2};
    std::vector<int> nums{1, 0, 1, 1, 1};
    int result = find_min(nums, 0, 4);
    for (auto i : nums) {
        std::cout << "element: " << i << std::endl;
    }
    std::cout << "result: " << result << std::endl;
}
int find_min(std::vector<int>& nums, int start, int end) {
    int index_1 = start, index_2 = end;
    int count = 0;
    while(nums[index_1] >= nums[index_2]) {
        if (index_2 == index_1 + 1 ) {
            break;
        }
        count++;
        int mid = (index_1 + index_2) / 2;
        if (nums[index_1] == nums[index_2] && nums[mid] == nums[index_2]) {
            FindMin(nums, 0, 4);
        }
        if (nums[mid] >= nums[index_2]) {
            index_1++;
        } else if (nums[mid <= nums[index_1]]) {
            index_2--;
        }
    }
    std::cout << "count: " << count << std::endl;
    return nums[index_2];
}
int FindMin(std::vector<int>& nums, int start, int end) {
    int result = 0;
    for (size_t i = 0; i < nums.size(); i++) {
        if (result >= nums[i]) {
            result = nums[i];
        }
    }
    return result;
}
