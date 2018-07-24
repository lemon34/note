/*************************************************************************
	> File Name: insert_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 10时37分42秒
 ************************************************************************/

#include<iostream>
# include <vector>

int main() {
        std::vector<int> temp{1, 3, 5, 2, 4, 6};
    for (auto a : temp) {
                std::cout << "element: " << a << std::endl;
    }
        size_t i, j;
        int temp_data = 0;
    for (i = 1; i < temp.size(); i++) {
                temp_data = temp[i];
        for (j = i - 1; j > 0 && temp[j] > temp_data; j--) {
                        temp[j + 1] = temp[j];
        }
                temp[j + 1] = temp_data;
    }
    for (auto a : temp) {
                std::cout << "element: " << a << std::endl;
    }

}
