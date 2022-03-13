/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 16:38:28
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 21:15:03
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t) {
    //直接比较两个等长字符串是否为错序 不需要滑动窗口
    //直接比较他俩的 数组情况就可
        vector<int> num = vector<int>(26,0);
        for(char c:t)
        {
            num[c-'a']++;
        }
        for(char c:s)
        {
            num[c-'a']--;
        }
        for(int i:num)
        {
            if(i!=0) return false;
        }
        return true;
    }