#pragma once
#include <cstdint>
#include <iostream>

namespace alt
{
    template<typename T>
    class node
    {
    public:
        T m_value;
        node* m_pnext;
        node(T val) : m_value(val), m_pnext(nullptr){};
    };


    template<typename T>
    class list
    {
     private:
        node<T>* m_first;
        node<T>* m_last;

    public:
        list() : m_first(nullptr), m_last(nullptr){};

        bool is_empty();

        void print();
        void push_back(T val);
        void push_front(T val);
        void del_front();




    };



	#include "..\src\list.tpp"
}
