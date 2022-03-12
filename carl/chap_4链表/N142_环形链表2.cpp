/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 14:24:25
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 16:05:16
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

ListNode *detectCycle(ListNode *head) 
    {
        //第一:环存不存在 快慢指针
        ListNode *fast;
        ListNode *slow;
        fast = slow =head;
        while(fast != nullptr && fast->next !=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)//有环 找环起点
            {
                slow = head;
                while(fast != slow)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }

        }
        return nullptr;
    }