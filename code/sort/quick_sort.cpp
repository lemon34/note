/*************************************************************************
	> File Name: quick_sort.cpp
	> Author: fuhailong
	> Mail: 
	> Created Time: 2018年07月24日 星期二 10时38分58秒
 ************************************************************************/ 

#include<iostream>
# include <vector>
    void quick_sort(int [], int, int);
    int main() {
            int temp[] = {1, 3, 2, 2, 4, 6};
        for (auto a : temp) {
                    std::cout << "element: " << a << std::endl;
        }
            quick_sort(temp, 0, 5);
            std::cout << "end sort" << std::endl;
        for (auto a : temp) {
                    std::cout << "element: " << a << std::endl;
        }
    }
    void quick_sort(int a[], int l, int r) {
        if (l < r) {
                    int i = l, j = r, x = a[i];
                    int flag = a[l]; // choose a flag
            while (i < j) {
                            while (i < j && a[j] > x)
                                j--;
                            if (i < j)
                                a[i++] = a[j];
                            while (i < j && a[i] < x)
                                i++;
                            if (i < j)
                                a[j--] = a[i];
            }
                    a[i] = x;
                    quick_sort(a, l, i - 1);
                    quick_sort(a, i + 1, r);
        }
    }
