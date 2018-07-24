/*************************************************************************
	> File Name: binary_find.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 10时42分00秒
 ************************************************************************/

#include<iostream>
#include<vector>

int main() {
        std::vector<int> nums{1, 2, 3, 4, 5, 6};
    for (auto i : nums) {
                std::cout << "element: " << i << std::endl;
    }
        int target = 0;
        int i = 0, j = 5;
    while (i <= j) {
        if (target == nums[(i + j) / 2]) {
                         std::cout << "find" << " "\
                         << (i + j) / 2 << std::endl;
                         return 0;
        }
                if (target > nums[(i + j) / 2])
                    i = (i + j) / 2 + 1;
                if (target < nums[(i + j) / 2])
                    j = (i + j) / 2 - 1;
                std::cout << "i j " << i << " " << j << std::endl;
    }
        std::cout << "fail" << std::endl;
        return 0;
}
