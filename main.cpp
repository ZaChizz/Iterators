//
// Created by Admin on 25.02.2021.
//
#include <iostream>
#include "List.cpp"

int main() {
    List<std::string>* list = new List<std::string>();

    list->append("alpha");
    list->append("bravo");
    list->append("charlie");
    list->append("delta");

    Iterator<std::string> it(list->last);

    it.begin();
    for ( ; !it.isOver(); it++ ) {
        std::cout << *it << std::endl;
    }
    std::cout << *it << std::endl;

    delete list;

    return 0;
}
