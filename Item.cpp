//
// Created by Admin on 25.02.2021.
//

#ifndef ITEM_CPP
#define ITEM_CPP

#include <iostream>

template <class Type>
class Item {
public:
    Type value;
    Item* prev;
    Item* next;

    Item(Type value) : value(value), prev(NULL), next(NULL) {};
};

#endif // ITEM_CPP


