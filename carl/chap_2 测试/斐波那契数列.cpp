/*
 * @Descripttion: 斐波那契的实现
 * @version: 
 * @Author: silas
 * @Date: 2022-03-05 20:27:56
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 14:46:21
 */
#include<iostream>
#include<vector>
#include<thread>
using namespace std;
int feibo1(int n)
{
    //完全的递归
    if(n<=0) return 0;
    if(n==1||n==2) return 1;
    if(n==3) return 2;
    else return feibo1(n-1)+feibo1(n-2);
}
int feibo3(int n)
{
    //使用数组存储
    if(n<=0) return 0;
    if(n==1||n==2) return 1;
    vector<int> num{1,1};
    num.reserve(n+2);
    vector<int>::iterator it;
    for(int i = 0; i < n-2 ;i++)
    {
        num.push_back(num.at(i)+num.at(i+1));
    }
    for(it = num.begin();it<num.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    return num.back();

}
int feibo2(int first,int second,int n)
{
    //精简解法 应当理解
    if(n<=0) return 0;
    if(n<3) return 1;
    if(n ==3) return first+second;
    else return feibo2(second,first+second,n-1);
}

int main()
{
    int n;
    while(std::cin>>n)
    {
        cout<<feibo3(n)<<endl;
        //cout<<feibo2(1,1,n)<<endl;
    }

}
