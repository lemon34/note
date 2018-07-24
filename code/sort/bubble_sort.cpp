/*************************************************************************
	> File Name: bubble_sort.cpp
	> Author: fuhailong
	> Mail: 540476129@qq.com
	> Created Time: 2018年07月24日 星期二 10时34分33秒
 ************************************************************************/

#include<iostream>
# include <vector>
using namespace std;
int main() {
        std::vector<int> temp{1, 3, 5, 2, 4, 6};
    for (auto a : temp) {
                std::cout << "element: " << a << std::endl;
    }
    for (size_t i = 0; i < temp.size(); i++) {
        for (size_t j = temp.size() - 1; j > i; j--) {
            if (temp[j] < temp[j - 1]) {
                std::swap(temp[j], temp[j - 1]);                            
            }
        }
            
    }
    for (auto a : temp) {
                std::cout << "element: " << a << std::endl;
            
    }

}
