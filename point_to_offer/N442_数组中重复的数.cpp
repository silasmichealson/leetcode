/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-06 16:15:26
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 16:25:06
 */
#include <iostream>
#include <vector>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) 
{
    //解法一 额外数组来存储次数 
    int size = nums.size();
    vector<int> used(size,0);
    for(int i=0;i<size;i++)
    {
        used.at(nums.at(i))++;
    }
    vector<int> res;
    for(int i=0;i<size;i++)
    {
        if(used.at(i)>1)
        res.push_back(i);
    }
    return res;
}

int main()
{
    vector<int> test{4,3,2,7,8,2,3,1};
    vector<int> re = findDuplicates(test);
    for(vector<int>::iterator it = re.begin();it!=re.end();it++)
    {
        cout<<*it<<"\t";
    }
}