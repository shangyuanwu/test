//
//  test.cpp
//  分文件编写
//
//  Created by 吴尚远 on 2022/5/10.
//

#include "test.h"
void swap_1(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
    cout << "a = " << a << endl << "b = " << b << endl;
}
