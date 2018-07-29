/*************************************************************************
	> File Name: merge_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 11时32分58秒
 ************************************************************************/

#include<iostream>

void merge(int* data, int start, int end, int* result) {
    int middle = (start + end) / 2;
    int left = start;
    int right = middle + 1;
    int result_index = start;
    while (left <= middle && right <= end) {
        if (data[left] < data[right]) {
            result[result_index++] = data[left++];
        } else {
            result[result_index++] = data[right++];
        }
    }
    while (left <= middle) {
        result[result_index++] = data[left++];
    }
    while (right <= end) {
        result[result_index++] = data[right++];
    }

}
void merge_sort(int* data, int start, int end, int* result) {
    int middle = (start + end) / 2;
    if (start + 1 == end) {
        if (data[start] > data[end]) {
            std::swap(data[start], data[end]);
        }
        return;
    } else if (start == end) {
        return;
    } else {
        merge_sort(data, start, middle, result);
        merge_sort(data, middle + 1, end, result);
        merge(data, start, end, result);
        for (int i = start; i < end + 1; ++i) {
            data[i] = result[i];
        }
    }
}

int main() {
    int arr[] = {4, 5, 3, 7, 9, 1, 0, 2, 8};
    int result[9];
    merge_sort(arr, 0, 8, result);
    for (int i = 0; i < 9; i++) {
        std::cout << "element: " << arr[i] << std::endl;
    }
    return 0;
}
