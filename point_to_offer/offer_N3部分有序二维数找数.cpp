/*
 * @Descripttion: 数组 找出数组中重复的数字
 * @version: 
 * @Author: silas
 * @Date: 2022-03-01 21:14:20
 * @LastEditors: silas
 * @LastEditTime: 2022-03-02 18:39:28
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        bool found = false;
        if(!matrix.empty()&&matrix.size()>0&&matrix.at(0).size()>0) 
        {
            int col,row;
            row=matrix.size();
            col=matrix.at(0).size();
            int nrow = 0 ,ncol= col-1;
            while (nrow<row && ncol >=0)
            {
                if(matrix[nrow][ncol]==target)
                {
                    found=true;break;
                }
                else if (matrix[nrow][ncol]>target)
                {
                    --ncol;
                }
                else ++nrow;
                
                /* code */
            }
        }
        return found;
        
  }
};
      //cout<<row<<"\t"<<col<<endl;
    