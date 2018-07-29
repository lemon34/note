/*************************************************************************
	> File Name: MorethanHalfNum.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 15时25分18秒
 ************************************************************************/

#include<iostream>

int moreThanHalfNum(int* numbers, int length) {
    if (checkInvalidarray(numbers, length)) {
        return 0;
    }
    int middle = length >> 1;
    int start = 0;
    int end = length - 1;
    int index = Partition(numbers, length, start, end);
    while (index != middle) {
        if (index > middle) {
            end = index - 1;
            index = Partition(numbers, length, start, end);
        } else {
            start = index + 1;
            index = Partition(numbers, le)
        }
    }
}
