#pragma once
#include <cstdint>
#include <iostream>

namespace alt
{
    template<typename T>
    class list
    {
     private:
         template<typename T>
         class node
         {
         public:
             T m_value;
             node* m_pNext;
             node(T val = T(), node* pNext = nullptr) : m_value(val), m_pnext(pNext) {};
         };

         node<T> *m_first;
         int m_size;

    public:
        list();

        bool is_empty();

        void print();
        void push_back(T val);
        void push_front(T val);
        void del_front();




    };



	#include "..\src\list.tpp"
}
