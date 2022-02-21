#include "../headers/math.h"

template<typename T>
inline alt::math_vector<T>::math_vector(std::size_t size)
{
    std::cout << "constructor" << this << std::endl;
	this->m_length = size;
	this->m_index  = 0;
	m_vector       = new T[m_length];
}

template<typename T>
inline const std::size_t& alt::math_vector<T>::size() const
{
    return this->m_length;
}

template<typename T>
inline void alt::math_vector<T>::add_elem(T val)
{
    if(this->m_length > this->m_index)
    {
        // Insert elem if size < index
        m_vector[m_index] = val;
        ++m_index;
    }
    else
    {
        // Copy vector - 1 in vector + 1 with help tmp arr
        T* tmp   = new T[m_index];
        for(std::size_t i = 0; i < this->m_length; ++i)
            tmp[i] = m_vector[i];

        delete[] m_vector;

        tmp[m_index] = val;

        m_vector = tmp;
        tmp      = nullptr;

        ++m_length;
        ++m_index;
    }
}

template<typename T>
inline void alt::math_vector<T>::print() const
{
    for(std::size_t i = 0; i < this->m_length; ++i)
        std::cout << m_vector[i] << std::ends;
}

template<typename T>
void alt::math_vector<T>::negative()
{
    for(std::size_t i = 0; i < m_length; ++i)
        m_vector[i] *= -1;
}

template<typename T>
void alt::math_vector<T>::mult_by(T val)
{
    for(std::size_t i = 0; i < m_length; ++i)
        m_vector[i] *= val;
}

template<typename T>
const double alt::math_vector<T>::vec_length() const
{
    double vec_length = T();

    for(std::size_t i = 0; i < m_length; ++i)
        vec_length += pow(m_vector[i], 2);

    vec_length = sqrt(vec_length);

    return vec_length;
}

template<typename T>
const double alt::math_vector<T>::scalar_mult(const double& first_vector_len,
                                              const double& second_vector_len,const double& cos_deg)
{
    double result = first_vector_len * second_vector_len * cos_deg;
    return result;
}


template<typename T>
inline alt::math_vector<T>::~math_vector()
{
    std::cout << "destruct" << this << std::endl;
	delete[] m_vector;
}
