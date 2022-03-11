#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector<int> num;
    vector<vector<int> > test(10,vector<int>(20));
    int row=test.size();int col = test[0].size();
    cout<<row<<"\t"<<col<<endl;
    // cout<<"num.capacity()\t"<<num.capacity()<<endl;
    // cout<<"num.size()\t"<<num.size()<<endl;
    // num.push_back(1);
    // cout<<"num.capacity()\t"<<num.capacity()<<endl;
    // cout<<"num.size()\t"<<num.size()<<endl;
}