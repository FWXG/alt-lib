#include "../headers/list.h"

template<typename T>
inline alt::list<T>::list()
{
    m_size = 0;
    m_first = nullptr;
}

template<typename T>
bool alt::list<T>::is_empty()
{
    return m_first == nullptr;
}

template<typename T>
void alt::list<T>::push_front(T val)
{
    node<T> *p_new_val = new node<T>(val);
    if(is_empty())
    {
        m_first = p_new_val;
        m_last = p_new_val;
    }
    else
    {
        m_first->m_pnext = p_new_val;
        m_first = p_new_val;
    }
}

template<typename T>
void alt::list<T>::push_back(T val)
{
    if(is_empty())
    {
       m_first = new node<T>(val);
    }
    else
    {
        node<T> *current = this->head;
        while(current->pNext != nullptr)
        {
            current = current->pNext;
        }
    }
}

template<typename T>
void alt::list<T>::del_front()
{
    if(is_empty()){return;}
    else
    {
        node<T>* p_new_val = m_first;
        m_first = p_new_val->m_pnext;
        delete p_new_val;
    }
}





