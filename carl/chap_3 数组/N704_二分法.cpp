/*
 * @Descripttion:
 * @version:
 * @Author: silas
 * @Date: 2022-03-06 10:40:15
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 13:52:31
 */
#include <iostream>
#include <vector>
using namespace std;
int binary1(vector<int> &num, int target, int low, int high)
{
    //递归
    if (high >= low)
    {
        int mid = low + (high - low)/ 2;
        if (num.at(mid) == target)
            return mid;
        else if (num.at(mid) > target)
            return binary1(num, target, low, mid - 1);
        return binary1(num, target, mid + 1, high);
    }
    return -1;
}

int binary2(vector<int> &num, int target)
{
    int low = 0, high = num.size() - 1;
    int mid;
    while (low <= high)
    {
        /* code */
        mid = low + (high - low) >> 1;
        if (num.at(mid) == target)
            return mid;
        if (num.at(mid) > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int binary3(vector<int> &num, int target)
{
    int low = 0, high = num.size();
    while (low < high)
    {
        /* code */
        int mid = low + (high - low) >> 1;
        if (num.at(mid) == target)
            return mid;
        if (num.at(mid) > target)
            high = mid;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int eor, x1, x2, x3;
    cin >> eor;
    vector<int> test;
    int n;
    while (cin >> n)
    {
        test.push_back(n);
    }
    //x1 = binary1(test, eor, 0, test.size() - 1);
    //x2 = binary2(test, eor);
    x3 = binary3(test, eor);
    //cout << x1 << "\t" ;
    //cout<< x2 << "\t" ;
    cout<< x3 << "\t" << endl;
}