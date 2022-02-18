#include "../headers/list.h"

template<typename T>
alt::list<T>::list()
{
    m_size  = 0;
    m_first = nullptr;
}

template<typename T>
bool alt::list<T>::is_empty() const
{
    return m_first == nullptr;
}

template<typename T>
std::size_t alt::list<T>::length() const
{
    return m_size;
}

template<typename T>
void alt::list<T>::push_back(T val)
{
    if(is_empty())
        m_first = new node<T>(val);
    else
    {
        node<T> *current = this->m_first;

        while(current->m_pNext)
            current = current->m_pNext;

        current->m_pNext = new node<T>(val);
    }

    ++m_size;
}

template<typename T>
void alt::list<T>::push_front(T val)
{
    m_first = new node<T>(val, m_first);
    ++m_size;
}

template<typename T>
void alt::list<T>::clear()
{
    while(m_size)
    {
        pop_front();
    }
}

template<typename T>
void alt::list<T>::pop_front()
{
    if(is_empty()) return;

    node<T> *tmp = m_first;
    m_first      = m_first->m_pNext;

    delete tmp;
    --m_size;
}

template<typename T>
T& alt::list<T>::operator[](const int index)
{
    int i = 0;
    node<T> *current = this->m_first;
    while(current != nullptr)
    {
        if(i == index)
            return current->m_value;

        current = current->m_pNext;
        ++i;
    }

    return current->m_value;
}

template<typename T>
void alt::list<T>::pop_back()
{
    node<T> *current = this->m_first;

    while(current->m_pNext)
        current = current->m_pNext;

    delete current;
    --m_size;
}

template<typename T>
alt::list<T>::~list()
{
    clear();
}




