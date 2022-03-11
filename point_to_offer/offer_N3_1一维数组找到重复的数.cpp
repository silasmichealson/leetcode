/*
 * @Descripttion: 一维数组的重复数字
 * @version: 
 * @Author: silas
 * @Date: 2022-03-05 14:47:18
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 16:16:22
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0 ;i < size ;i++)
        {
            while (nums.at(i)!=i)
            {
                if(nums.at(i) == nums.at(nums.at(i)))
                {
                    return nums.at(i);
                }
                int temp = nums.at(i);
                nums.at(i) = nums.at(temp);
                nums.at(temp) = temp;

            }
            
        }
    }
};