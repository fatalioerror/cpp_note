/**
 * @file   my_sizeof.cpp
 * @author  <damaobangfa@gmail.com>
 * @date   Fri Sep  2 22:15:51 2016
 *
 * @brief  显示常用类型的长度
 *
 *
 */

#include <iostream>

using namespace std;

int main(int __attribute__((unused)) argc, __attribute__((unused)) char *argv[])
{

        cout << "sizeof(bool) = " << sizeof(bool) << endl;
        cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;
        cout << "sizeof(char16_t) = " << sizeof(char16_t) << endl;
        cout << "sizeof(char32_t) = " << sizeof(char32_t) << endl;
        cout << "sizeof(short) = " << sizeof(short) << endl;
        cout << "sizeof(int) = " << sizeof(int) << endl;
        cout << "sizeof(long) = " << sizeof(long) << endl;
        cout << "sizeof(long long) = " << sizeof(long long) << endl;
        cout << "sizeof(float) = " << sizeof(float) << endl;
        cout << "sizeof(double) = " << sizeof(double) << endl;
        cout << "sizeof(long double) = " << sizeof(long double) << endl;
        return 0;
}
