/*************************************************************************
	> File Name: MergeList_sorted.cpp
	> Author: fuhailong
	> Mail: 
	> Created Time: 2018年07月26日 星期四 16时15分10秒
 ************************************************************************/

#include<iostream>

struct ListNode {
    int m_nValue;
    ListNode* m_pnext;
}
ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
    if (pHead1 == NULL && pHead2 == NULL) {
        std::cerr << "error" << std::endl;
    } else if (pHead1 == NULL) {
        return pHead2;
    } else if (pHead2 ==NULL) {
        return pHead1;
    }
    ListNode* NewHead;
    if (pHead1 -> m_nValue < pHead2 -> m_nValue) {
        NewHead = pHead1;
        NewHead -> m_pnext = Merge(pHead1 -> m_pnext, pHead2);
    } else {
        NewHead = pHead2;
        NewHead -> m_pnext = Merge(pHead1, pHead2 -> m_pnext);
    }
    return NewHead;
}
