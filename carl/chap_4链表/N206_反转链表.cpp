/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 13:59:53
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 14:22:23
 */
#include<iostream>
using namespace std;
struct ListNode
{
    /* data */
    int val;
    ListNode * next;
    ListNode(int x):val(x),next(nullptr){}
};
ListNode* reverseList(ListNode* head) {
        ListNode* fast;
        ListNode* slow;
        ListNode* temp;
        fast = head;
        slow = nullptr;//头指针前项为null
        while(fast!=nullptr)
        {
            temp = fast->next;
            fast->next = slow;

            slow = fast;
            fast = temp;
        }
        return slow;
    }

//反转链表也可以用递归法
//对一个链表的反转 即分解为对每两个节点的反转

ListNode* reverse(ListNode* slow,ListNode* fast)
{
    if(fast == nullptr) return slow;//反转结束
    ListNode* tmp = fast->next;
    fast->next = slow;
    //等同于 非递归的时候 slow = fast fast = temp
    return reverse(fast,tmp);
}

ListNode* reverseList2(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = nullptr;
    return reverse(slow,fast);
}