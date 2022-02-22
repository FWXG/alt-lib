#include "../headers/math.h"

template<typename T>
inline alt::matrix<T>::matrix(std::size_t rows, std::size_t column)
{
	this->m_rows   = rows;
	this->m_column = column;

	this->m_matrix = new T*[this->m_rows];
	for(std::size_t i = 0; i < this->m_rows; ++i)
		this->m_matrix[i] = new T[this->m_column];

    //std::cout << "constructor" << this->m_matrix << std::endl;

}

template<typename T>
void alt::matrix<T>::init(std::size_t row, std::size_t col, T num)
{
	this->m_matrix[row][col] = num;
}

template<typename T>
const std::size_t& alt::matrix<T>::row_size() const
{
	return this->m_rows;
}

template<typename T>
const std::size_t& alt::matrix<T>::col_size() const
{
	return this->m_column;
}

template<typename T>
void alt::matrix<T>::print() const
{
	for (std::size_t i = 0; i < m_rows; ++i)
	{
		for (std::size_t j = 0; j < m_column; j++)
		{
			std::cout << m_matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

template<typename T>
void alt::matrix<T>::add_minus()
{
	for (std::size_t i = 0; i < m_rows; ++i)
	{
		for (std::size_t j = 0; j < m_column; j++)
			m_matrix[i][j] *= -1;
	}
}

template<typename T>
void alt::matrix<T>::mult_by(T val)
{
	for (std::size_t i = 0; i < m_rows; ++i)
	{
		for (std::size_t j = 0; j < m_column; j++)
			m_matrix[i][j] *= val;
	}
}

template<typename T>
inline void alt::matrix<T>::transp()
{
	T** tmp = new T*[m_column];
	for(std::size_t i = 0; i < m_column; ++i)
		tmp[i] = new T[m_rows];

	std::swap(m_rows, m_column);

	for(std::size_t i = 0; i < m_rows; ++i)
	for(std::size_t j = 0; j < m_column; ++j)
		tmp[i][j] = m_matrix[j][i];

	for(std::size_t i = 0; i < m_rows; ++i)
		delete[] m_matrix[i];

	delete[] m_matrix;

	m_matrix = tmp;
	tmp      = nullptr;

}


template<typename T>
alt::matrix<T> alt::matrix<T>::operator=(const alt::matrix<T>& _matrix)
{
    this->m_rows = _matrix.m_rows;
    this->m_column = _matrix.m_column;

    return *this;
}

template<typename T>
T alt::matrix<T>::det_gauss()
{
    double tmp = 0.0, D = 1;
    if(this->m_rows == this->m_column){
    for(std::size_t k = 0; k < this->m_rows - 1; ++k)
    for(std::size_t i = k + 1; i < this->m_rows; ++i) {
            tmp = -this->m_matrix[i][k] / this->m_matrix[k][k];
            for(std::size_t j = 0; j < this->m_rows; ++j)
                this->m_matrix[i][j] += this->m_matrix[k][j] * tmp;
    }

    for (std::size_t i = 0; i < this->m_rows; ++i)
        D *= this->m_matrix[i][i];
    }

    return D;
}

template<typename T>
inline alt::matrix<T>::~matrix()
{
    //std::cout << "destructor" << this->m_matrix << std::endl;
	for(std::size_t i = 0; i < this->m_rows; ++i)
		delete[] this->m_matrix[i];

	delete[] this->m_matrix;
}



