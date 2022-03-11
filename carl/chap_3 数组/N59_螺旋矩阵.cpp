/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-06 14:51:05
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 15:35:01
 */
#include<iostream>
#include<vector>
using namespace std;
// 3            4                   5
// 1 2 3        1   2   3   4       1   2   3   4   5
// 8 9 4        12  13  14  5       16  17  18  19  6
// 7 6 5        11  16  15  6       15  24  25  20  7
//              10  9   8   7       14  23  22  21  8
//                                  13  12  11  10  9
//边界条件为1-n-1 每进一层1-上一层减二 层数=n/2 若为单数则在[n/2][n/2]填上n^2
//故此 边界可以写层 x ~ x + n -offset 此x为初始位置 offset初始为1 每次+2
//明确需要哪些数据 每次的起始位置 循环次数 循环边界 填数位置 偏移值
vector<vector<int>> generateMatrix(int n) 
{
    vector<vector<int>> num(n,vector<int> (n,0));
    int len = n-1;
    int mid = n/2;
    int loop = n/2;
    int offset = 1;
    int stx,sty,i,j;
    int count =1;
    stx=sty=0;
    for(int k = 0 ; k < loop ;k++)
    {
        i=stx;
        j=sty;
        //left -> right
        for(j = sty ; j < sty + n - offset ;j++ )
        {
            num[i][j] = count++;
        }

        //up -> down
        for(i = stx; i < stx+n-offset;i++)
        {
            num[i][j] = count++;
        }

        //right -> left
        for(;j>sty;j--)
        {
            num[i][j] =count++;
        }

        for(;i>stx;i--)
        {
            num[i][j]= count++;
        }

        stx ++;sty++;
        offset+=2;
    }
    if(n&0x01)
    {
        num[mid][mid] = count;
    }
    return num;
}

void shownum(vector<vector<int>> num)
{
    int rol = num.size();
    int col = num.at(0).size();
    for(int i = 0 ;i < rol;i++)
    {
        for(int j = 0 ;j < col ;j++)
        {
            cout<<num[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    while(cin >>n){
        shownum(generateMatrix(n));
    };

}