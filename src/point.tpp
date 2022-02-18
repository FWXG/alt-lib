#include "../headers/point.h"

template<typename T>
alt::smart_pointer<T>::smart_pointer(T *ptr)
{
    this->m_ptr = ptr;
}

template<typename T>
alt::smart_pointer<T>::smart_pointer(smart_pointer& p)
{
    this->m_ptr = p.m_ptr;
    p.m_ptr = nullptr;
}

template<typename T>
T& alt::smart_pointer<T>::operator*() const
{
    return *m_ptr;
}

template<typename T>
alt::smart_pointer<T>::~smart_pointer()
{
    delete m_ptr;
}



