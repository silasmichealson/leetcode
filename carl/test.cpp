/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-06 15:12:31
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 15:19:08
 */
#include<iostream>
using namespace std;
int main()
{
    int n,x,count;
    cin >> n >> x >>count;

    for(int i = x ;i <x + n-3;i++)
    {
        cout<<count++<<"\t";
    }
}