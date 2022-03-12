/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-11 21:18:56
 * @LastEditors: silas
 * @LastEditTime: 2022-03-11 21:27:20
 */
struct ListNode
{
    /* data */
    int val;
    ListNode * next;
    ListNode(int x):val(x),next(nullptr){}
};

struct List
{
    /* data */
    ListNode * Head;
    int count;
};

