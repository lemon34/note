/*************************************************************************
	> File Name: reverseList.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 15时46分01秒
 ************************************************************************/

#include<iostream>
# include <vector>
struct ListNode {
    int m_nValue;
    ListNode* m_pnext;
}
ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head -> next == nullptr) {
        return head;
    } else {
        ListNode* newHead = reverseList(head -> m_pnext);
        head -> m_pnext -> m_pnext = head;
        head -> m_pnext = nullptr;
        return newHead;
    }
} // recursion version
int main() {
    
}

