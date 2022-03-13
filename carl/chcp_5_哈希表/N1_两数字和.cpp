/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 20:35:51
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 21:11:58
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//哈希更适合处理 两个元素是否符合条件的情况
//容器中 unordered_map 和 unorderer_set都是依靠哈希实现的
//容器中不许存在重复键值 同理可以无序
//预处理的内容包括了对应下标 所以一个存数一个存下标
vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int,int> sub;
    for(int i = 0 ;i <nums.size();i++)
    {
        auto iter = sub.find(target-nums[i]);
        if(iter!=sub.end()) return {iter->second,i};
        sub.insert(pair<int,int>(nums[i],i));
    }
    return {};
        
}


vector<int> twoSum1(vector<int>& nums, int target) 
{
    for(int i:nums)
    {
        for(int j:nums)
        {
            if(i+j ==target)
            {
                return {i,j};
            }
        }
    }    
    return {};  
}