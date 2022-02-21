#include <cstddef>
#include <iostream>
#include <utility>
#include <cmath>
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

		alt::matrix<T> operator=(const alt::matrix<T>& _matrix);


		void print() const;
		void init(std::size_t row, std::size_t col, T num);
		const std::size_t& row_size() const;
		const std::size_t& col_size() const;

		//Operation
		void add_minus();
		void mult_by(T val);
		void transp();
		static alt::matrix<T> mult_matrix(alt::matrix<T> first_matrix, alt::matrix<T> second_matrix);

	};

	#include "../src/matrix.tpp"
}

namespace alt
{

	template<typename T>
	class math_vector
	{
	private:

        //All have same basis i and j
        typedef alt::math_vector<T> _vector;

		T* m_vector;
		std::size_t m_length;
		std::size_t m_index;

	public:

		math_vector(std::size_t size);
		~math_vector();

		void add_elem(T val);
		void print() const;
		const std::size_t& size() const;

		//Operation
		void negative();
		void mult_by(T val);

        const double vec_length() const;

		static const double scalar_mult(const double& first_vector_len,
                                  const double& second_vector_len,const double& cos_deg);

	};

	#include "../src/math_vector.tpp"
}
