/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-06 14:18:56
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 14:42:04
 */
#include <iostream>
#include <vector>
using namespace std;
int minSubArrayLen1(int target, vector<int>& nums)
{
    int sum,res,len,i,j;
    res = INT32_MAX;
    for(i=0;i<nums.size();i++)
    {
        sum = 0;
        for(j = i ; j < nums.size();j++)
        {
            sum+=nums[j];
            if(sum>=target)
            {
                len = j - i +1;
                res = (res<len)?res:len;
                break;
            }
        }
    }
    res = (res==INT32_MAX)?0:res;
    return res;
}

int minSubArrayLen(int target, vector<int>& nums)
{
    //滑动窗口内的元素 ： 和大于等于target的子数组
    //滑动起点 ： i指针 当出现sum >target 是 sum-=nums[i++]
    //滑动重点 ： j指针当前指针
    int res,sum,i,j,len;
    res=INT32_MAX;
    sum = 0;
    len = 0;
    i=0;
    for(j=0;j<nums.size();j++)
    {
        sum+=nums.at(j);
        while (sum>=target)
        {
            len = j -i+1;
            res =(res<len)?res:len;
            sum-=nums.at(i++);
            /* code */
        }
    }
    return res==INT32_MAX?0:res;
}

int main()
{
    int tar = 7;
    vector<int> test = {2,3,1,2,4,3};
    cout<<minSubArrayLen(tar,test)<<endl;
}