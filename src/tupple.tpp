#include "../headers/tupple.h"

template<typename T>
alt::tupple<T>::tupple()
{
    this->m_size = 0;
    m_array      = nullptr;
}

template<typename T>
T& alt::tupple<T>::operator[](const std::size_t index) const
{
    return this->m_array[index];
}

template<typename T>
const std::size_t& alt::tupple<T>::length() const
{
    return this->m_size;
}

template<typename T>
alt::tupple<T>::tupple(T *val, std::size_t size)
{
    this->m_array = val;
    this->m_size  = size;

    for(std::size_t i = 0; i < size - 1; ++i)
    for(std::size_t e = 0; e < size - i - 1; ++e)
    {
        if(m_array[e] == m_array[e + 1])
        {
            T *tmp = new T[size - 1];
            for(std::size_t k = 0; k < e; ++k)
            {
                tmp[k] = m_array[k];
            }

            for(std::size_t j = e + 1; j < size - 1; ++j)
            {
                tmp[j] = m_array[j];
            }

            m_array = tmp;
            --m_size;
        }
            
    }
}


template<typename T>
alt::tupple<T>::~tupple()
{
    delete[] m_array;
}

