//
//  main.cpp
//  分文件编写
//
//  Created by 吴尚远 on 2022/5/10.
//

#include <iostream>
#include "test.h"
using namespace std;

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    int &A = a;
    int &B = b;
    swap_1(A,B);
    cout << "a = " << a << endl << "b = " << b << endl;
    return 0;
}
