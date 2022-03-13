/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 21:14:39
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 21:32:16
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//计算i j k l 
//换成 i+j 和 k+l 的匹配
//多少组:i+j 计算出现次数 当k+l等于-(i+j) count++出现次数
    unordered_map<int,int> map;
    int count =0;
    for(int i:nums1)
    {
        for(int j:nums2)
        {
            if(map.find(i+j)!=map.end()) map[i+j]++;
            map.insert(pair<int,int>(i+j,1));
        }
    }
    for(int k:nums3)
    {
        for(int l:nums4)
        {
            if(map.find(0-(k+l))!=map.end())
            {
                count+=map[0-(k+l)];
            }
        }
    }
    return count;

}