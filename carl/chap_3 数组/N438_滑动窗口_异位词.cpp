/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-12 16:48:25
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 17:36:20
 */
#include <iostream>
#include <vector>
using namespace std;
vector<int> findAnagrams(string s, string p) 
{
    //窗口:字母和p相同  窗口大小 p的长度
    //当窗口小于 n 则first++
    //当窗口等于n  则second++
    //while(s[first] != '\0' )
    vector<int> ans=vector<int>(26,0);
    vector<int> ver=vector<int>(26,0);
    vector<int> res;
        for(int i = 0 ;i < p.size();i++)
        {
            ans[p[i]-'a']++;
        }
        for(int i = 0;i <s.size();i++ )
        {
            ver[s[i]-'a']++;
            if(i >= p.size()) ver[s[i-p.size()]-'a']--;
            if(ans == ver) res.push_back(i-p.size()+1);
        }

        return res;
    
}

int main()
{
    string soc("cbaebabacd");
    string tar("abc");
    vector<int> num = findAnagrams(soc,tar);
    for(int i : num)
    {
        cout<<i<<endl;
    }
}
//"cbaebabacd"
//"abc"
//0,6