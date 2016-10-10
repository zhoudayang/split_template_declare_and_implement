//
// Created by zhouyang on 16-10-10.
//
#include "memory_cell.h"

template<typename Object>
MemoryCell<Object>::MemoryCell(const Object &initialValue) :
        storedValue(initialValue) { }

template<typename Object>
const Object & MemoryCell<Object>::read() const {
    return storedValue;
}

template<typename Object>
void MemoryCell<Object>::write(const Object &x) {
    storedValue = x;
}

//类模板显示实例化
template
class MemoryCell<int>;

template
class MemoryCell<double>;