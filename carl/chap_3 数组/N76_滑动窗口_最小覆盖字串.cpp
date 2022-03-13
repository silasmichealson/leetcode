/*
 * @Descripttion:
 * @version:
 * @Author: silas
 * @Date: 2022-03-12 17:38:10
 * @LastEditors: silas
 * @LastEditTime: 2022-03-12 18:12:30
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
string minWindow(string s, string t)
{
    //此处需要使用map来存字串信息
    string result;
    if(s.empty()||t.empty()) return result;

    unordered_map<char,int> map;
    unordered_map<char,int> window;
    for(char c:t)
    {
        map[c]++;
    }

    int minlength = INT_MAX;
    int lettercount =0;
    for(int slow = 0 ,fast =0;fast < s.length();fast++)
    {
        char c =s[fast];
        if(map.find(c) != map.end())
        {
            window[c]++;
            if(window[c]<= map[c])
            lettercount++;
        }
        if(lettercount >= t.length())
        {
            while(map.find(s[slow])==map.end() || window[slow]> map[slow])
            {
                window[s[slow]]--;
                slow++;
            }
            if((fast - slow + 1 )< minlength)
            {
                minlength = fast-slow+1;
                result = s.substr(slow,minlength);
            }
        }
    }
    return result;
}