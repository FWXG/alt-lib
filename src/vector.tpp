#include "../headers/vector.h"


template<typename T>
void alt::vector<T>::add_elem(T elem)
{
    if(m_index < m_max_size)
    {
        m_pointer[m_index] = elem;
        ++m_index;
    }
    else{
        m_max_size = ++m_index;

        if(m_pointer){
            m_tmp_arr = new T[m_max_size - 1];
            for(size_t i = 0; i < m_max_size - 1; ++i)
                m_tmp_arr[i] = m_pointer[i];
            delete[] m_pointer;
        }

        m_pointer = new T[m_max_size];

        if(m_pointer){
            for(size_t i = 0; i < m_max_size - 1; ++i)
                m_pointer[i] = m_tmp_arr[i];
            delete[] m_tmp_arr;
        }
        m_pointer[m_index - 1] = elem;
    }
}

template<typename T>
void alt::vector<T>::del_last()
{
    try
    {
        if(m_max_size == 0)
            throw -1;

        m_max_size = --m_index;
        if(m_pointer){
            m_tmp_arr = new T[m_max_size];
            for(size_t i = 0; i < m_max_size; ++i)
                m_tmp_arr[i] = m_pointer[i];
            delete[] m_pointer;
        }
        m_pointer = new T[m_max_size];
        if(m_pointer){
            for(size_t i = 0; i < m_max_size; ++i)
                m_pointer[i] = m_tmp_arr[i];
            delete[] m_tmp_arr;
        }
    }
    catch(int a)
    {
        std::cerr << "length error";
    }

}

template<typename T>
void alt::vector<T>::insert(std::size_t pos, T elem)
{
    try
    {
        if(m_max_size == 0 || pos > m_max_size)
            throw -1;

        ++m_max_size;

        m_pointer[pos] = elem;




    }
    catch(int a)
    {
        std::cerr << "length error";
    }
}

template<typename T>
inline size_t alt::vector<T>::length() const
{
	return m_max_size;
}

template<typename T>
void alt::vector<T>::reserve(std::size_t num)
{
    m_max_size = num;
    m_pointer = new T[m_max_size];
}

template<typename T>
void alt::vector<T>::resize(std::size_t num)
{
    m_max_size = num;
}

template<typename T>
inline bool alt::vector<T>::is_empty() const
{
	if(m_index) return false;
	else return true;

}

template<typename T>
void alt::vector<T>::clear()
{
	delete[] m_pointer;
	m_pointer = nullptr;
	m_index = 0;
}

template<typename T>
alt::vector<T>::~vector()
{
	if(m_pointer){
		delete[] m_pointer;
		m_pointer = nullptr;
	}
}


