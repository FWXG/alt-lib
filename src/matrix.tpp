#include "../headers/math.h"

template<typename T>
inline alt::matrix<T>::matrix(std::size_t rows, std::size_t column)
{
	this->m_rows   = rows;
	this->m_column = column;

	m_matrix = new T*[m_rows];
	for(std::size_t i = 0; i < m_rows; ++i)
		m_matrix[i] = new T[m_column];

}

template<typename T>
void alt::matrix<T>::init(std::size_t row, std::size_t col, T num)
{
	m_matrix[row][col] = num;
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
alt::matrix<T> alt::matrix<T>::mult_matrix(T **val, std::size_t rows, std::size_t column)
{
	if(m_column == rows)
	{
		alt::matrix<T> result(m_rows, column);
		
		for(std::size_t i = 0; i < m_rows; ++i)
		{
			for(std::size_t j = 0; j < column; ++j)
			{
				result.init(i, j, 0);
			}
		}

		return result;
	}
	else
	{
		std::cerr << "error matrix size" << std::ends;
	}

}


template<typename T>
inline alt::matrix<T>::~matrix()
{
	for(std::size_t i = 0; i < m_rows; ++i)
		delete[] m_matrix[i];

	delete[] m_matrix;
}



