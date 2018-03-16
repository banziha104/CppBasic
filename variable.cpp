//
// Created by 이영준 on 2018. 3. 13..
//

#include <iostream>

using namespace std;

int main(){
    int a = 20;
    int * const cpp = &a;
    const int *cpp2;
    cpp2 = &a;

    cout << &a << "/" << a << "/" << cpp2 << "/" << *cpp2 << "/" << cpp<< "/"  << *cpp << endl;
}