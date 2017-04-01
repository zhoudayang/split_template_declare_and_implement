//
// Created by zhouyang on 16-10-10.
//

#ifndef MEMORY_CELL_H
#define MEMORY_CELL_H



template<typename Object>
class MemoryCell {
public:
    explicit MemoryCell(const Object &initialValue = Object{});

    Object read() const;

    void write(const Object &x);

private:
    Object storedValue;


};

//将实现包含进来
#include "memory_cell.tpp"


#endif
