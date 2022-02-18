#include "../headers/tupple.h"

template<typename T>
alt::tupple<T>::tupple()
{
    this->m_size = 0;
    m_array = nullptr;
}

template<typename T>
alt::tupple<T>::tupple(T *val, std::size_t size)
{
    this->m_array = val;
    this->m_size = size;
}


template<typename T>
alt::tupple<T>::~tupple()
{

}

