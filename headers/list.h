#pragma once
#include <cstdint>
#include <iostream>

namespace alt
{
    template<typename T>
    class list
    {

     private:

        template<typename U>
        class node
        {
        public:
            T m_value;
            node* m_pNext;
            node(T val = T(),node *m_pNext = nullptr) : m_value(val), m_pNext(m_pNext){};
        };

        std::size_t m_size;
        node<T> *m_first;

    public:

        list();
        ~list();

        std::size_t length() const;

        bool is_empty() const;

        void push_back(T val);
        void push_front(T val);
        void pop_front();
        void pop_back();

        void clear();

        T& operator[](const int index);

    };



	#include "..\src\list.tpp"
}
