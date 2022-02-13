#include "vector.h"

template<typename T>
inline void alt::vector<T>::add_elem(T elem)
{
	++this->m_length;
	if(m_pointer){
		m_tmp_arr = new T[m_length - 1];
		for(size_t i = 0; i < m_length - 1; ++i)
			m_tmp_arr[i] = m_pointer[i];
		delete[] m_pointer;
	}
	m_pointer = new T[m_length];
	if(m_pointer){
		for(size_t i = 0; i < m_length - 1; ++i)
			m_pointer[i] = m_tmp_arr[i];
		delete[] m_tmp_arr;
	}
	m_pointer[m_length - 1] = elem;
}

template<typename T>
inline size_t alt::vector<T>::length()
{
	return this->m_length;
}

template<typename T>
bool alt::vector<T>::is_empty()
{
	if(m_length) return false;
	else return true;
		
}

template<typename T>
void alt::vector<T>::clear()
{
	delete[] m_pointer;
	m_pointer = nullptr;
	m_length = 0;
}

template<typename T>
alt::vector<T>::~vector()
{
	if(m_pointer){
		delete[] m_pointer;
		m_pointer = nullptr;
	}
}


