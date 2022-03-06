/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-06 13:52:02
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 13:59:49
 */
#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val)
{
    int first,second;
    first = 0;
    for(second =0 ; second < nums.size();second++)
    {
        if(nums.at(second)!=val)
        nums[first++]=nums[second];
    }
    return first;
}