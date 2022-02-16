#include "../headers/list.h"

template<typename T>
bool alt::list<T>::is_empty()
{
    return m_first == nullptr;
}

template<typename T>
void alt::list<T>::print()
{

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
    node<T> *p_new_val = new node<T>(val);
    if(is_empty())
    {
       m_first = p_new_val;
       m_last = p_new_val;
       return;
    }
    else
    {
        m_last->m_pnext = p_new_val;
        m_last = p_new_val;
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





