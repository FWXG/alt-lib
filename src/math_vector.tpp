#include "../headers/math.h"

template<typename T>
inline alt::math_vector<T>::math_vector(std::size_t size)
{
	this->m_length = size;
	m_vector       = new T[m_length];
}

template<typename T>
inline void alt::math_vector<T>::add_elem(T val)
{
	if(m_index < m_length)
	{
		
	}
}

template<typename T>
inline alt::math_vector<T>::~math_vector()
{
	delete[] m_vector;
}