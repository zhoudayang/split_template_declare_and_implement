#include "memory_cell.h"

#include <iostream>

using namespace std;
//总结:在头文件中声明，在cpp文件中实现，并且显示实例化需要的类型。但是只能够使用那些显示实例化之后的类型。
int main() {
    MemoryCell<int> m1;
    MemoryCell<double> m2{3.14};

    m1.write(37);
    m2.write(m2.read() * 2);

    cout << m1.read() << endl;
    cout << m2.read() << endl;

    return 0;
}