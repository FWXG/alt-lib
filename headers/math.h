#include <cstddef>
#include <iostream>
#include <utility>
#pragma once

namespace alt
{
	template<typename T>
	class matrix
	{
	private:
		
		T** m_matrix;
		std::size_t m_rows;
		std::size_t m_column;

	public:

		matrix(std::size_t rows, std::size_t column);
		~matrix();

		//T& operator[](std::size_t index_first, std::size_t index_second) const; Simply, such an operator does not exist, so you can not overload it.

		void print() const;
		void init(std::size_t row, std::size_t col, T num);
		const std::size_t& row_size() const;
		const std::size_t& col_size() const;

		void add_minus();
		void mult_by(T val);
		void transp();
		alt::matrix<T> mult_matrix(T** val, std::size_t rows, std::size_t column);
	
	};

	#include "../src/matrix.tpp" 
}

namespace alt
{
	template<typename T>
	class math_vector
	{
	private:

		T* m_vector;
		std::size_t m_length;
		std::size_t m_index;

	public:

		math_vector(std::size_t size);
		~math_vector();

		void add_elem(T val);

	};

	#include "../src/math_vector.tpp"
}