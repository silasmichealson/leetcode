/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-11 21:21:33
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 13:55:27
 */
//1->4->2->4 val = 4
//1->2

//解法思路:双指针 一个first second first指到val相等 temp = first first = first->next delete tmp second->next = first

//两种情况 第一无头节点 第二有自己加虚头接点

#include<iostream>
using namespace std;
struct ListNode
{
    /* data */
    int val;
    ListNode * next;
    ListNode(int x):val(x),next(nullptr){}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //删除头节点
        while ( head != NULL && head ->val == val)
        {
            ListNode * temp = head;
            head = head->next;
            delete temp;
            /* code */
        }

        ListNode * cur = head;
        while(cur!=NULL && cur->next != NULL)
        {
            if(cur->next->val == val)
            {
                ListNode * tmp = cur->next;
                cur ->next = cur->next->next;
                delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        return head;
    }

public:
    ListNode* removeElements2(ListNode* head, int val) {
        ListNode * vhead = new ListNode(0);
        vhead->next = head;
        ListNode *temp = vhead;
        while (vhead != NULL)
        {
            if(vhead->next->val == val)
            {
                ListNode * tmp = vhead->next;
                vhead->next = vhead->next->next;
                delete tmp;
            }
            else{
                vhead =vhead->next;
            }
            /* code */
        }
        head = temp->next;
        delete vhead;
        return head;
        
    }
};
