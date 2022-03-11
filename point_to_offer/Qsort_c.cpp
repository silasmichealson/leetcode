/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-05 14:59:49
 * @LastEditors: silas
 * @LastEditTime: 2022-03-05 15:50:36
 */
#include<iostream>
using namespace std;
int partition(int num[],int low,int high);
void qsort(int num[],int low,int high);
void swap(int *a,int *b);
void show(int num[])
{
    for(int i = 0; i <=10 ;++i)
    {
        cout<<num[i]<<"\t";
    }
    cout<<endl;
}
void swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
int partation(int num[],int low,int high)
{
    int temp =  num[low];
    while(low<high)
    {
        while(low<high&&num[high]>=temp) --high;
        swap(num[low],num[high]);
        while (low<high&&num[low]<=temp) ++low;
        swap(num[low],num[high]);
    }
    num[low]=temp;
    return low;
}
void qsort(int num[],int low,int high)
{
    if(low>=high) return;
    int mid = partation(num,low,high);
    qsort(num,low,mid-1);
    qsort(num,mid+1,high);
}
int main()
{
    int a[10] = {2,134,0, 23,542,12, 4,1,23, 100};
    qsort(a,0,10);
    show(a);
}