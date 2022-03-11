/*
 * @Descripttion:
 * @version:
 * @Author: silas
 * @Date: 2022-03-05 20:30:08
 * @LastEditors: silas
 * @LastEditTime: 2022-03-05 20:56:20
 */
#include <iostream>
double power_of_unsinged(int base, int ex)
{
    if (ex == 0)
        return 1;
    if (ex == 1)
        return base;

    double res = 1.0;
    res = power_of_unsinged(base, ex >> 1);
    res *= res;
    if (ex & 0x01)
        res *= base;
    return res;
}
double power(int base, int ex)
{

    if (base == 0 && ex <= 0)
        return -1;
    double result = 1.0;
    int temp = (int)abs(ex);
    result = power_of_unsinged(base, temp);
    // for(int i = 1; i<=temp;i++)
    // {
    //     result*=base;
    // }
    if (ex < 0)
        result = 1.0 / result;
    return result;
}

int power2(int base, int ex)
{
    if (ex == 0)
        return 1;
    int t = power2(base, ex / 2);
    if (ex % 2)
        return t * t * base;
    else
        return t * t;
}
int main()
{
    int base, ex;
    std::cin >> base >> ex;
    std::cout << power2(base, ex) << std::endl;
}