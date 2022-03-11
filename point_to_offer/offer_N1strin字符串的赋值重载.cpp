/*
 * @Descripttion: 
 * @version: 
 * @Author: silas
 * @Date: 2022-03-06 15:54:25
 * @LastEditors: silas
 * @LastEditTime: 2022-03-06 15:56:08
 */
//对赋值运算符
#include<string>
class CMString
{
    public:
    CMString();
    CMString(const CMString& str);
    ~CMString();
    private:
    char* m_pdata;
};

//第一部分 返回应该是引用 重定义CMString类的赋值运算
CMString& CMString::operator = (const CMString& str)
{
    //理解:赋值运算相当于被赋值的指针指向 赋值指针 并且释放被赋值原有的空间 
    //case 1
    if(&str == this)
        return *this;
    
    delete []m_pdata;
    m_pdata=nullptr;

    m_pdata = new char[strlen(str.m_pdata)+1];
    strcpy(m_pdata,str.m_pdata);
    //缺点str不能中间带/0
    return *this;//为实现连续赋值

    //case2
    if(&str!=this)
    {
        CMString strtemp(str);
        char* ptemp=strtemp.m_pdata;
        strtemp.m_pdata = m_pdata;
        m_pdata = ptemp;
        //此处用一个临时变量 strtemp来存储str 让this的m_pdata指向地址
        //而让临时变量strtemp的指向this的m_data在临时变量失去作用域时收回空间
    }
    return *this;
}

