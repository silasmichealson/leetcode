/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 20:27:01
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 20:36:04
 */
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> same;
    unordered_set<int> n1(nums1.begin(),nums1.end());
    for(int i : nums2)
    {
        if(n1.find(i) != n1.end()) same.insert(i);
    }
    //return same;
    return vector<int>(same.begin(),same.end());
}