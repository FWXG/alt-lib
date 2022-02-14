#pragma once
#include <cstdint>
#include <iostream>

namespace alt
{
	template<typename T>
	class vector
	{
	private:
	    std::size_t m_max_size = 0;
		std::size_t m_index = 0;
		T* m_pointer = nullptr;
		T* m_tmp_arr = nullptr;

	public:

		vector() = default;
		~vector();

		bool is_empty() const;

		void add_elem(T elem);
		void reserve(std::size_t num);
		void del_last();
		void clear();

		std::size_t length() const;

		T& operator[](const int index) const
		{
			return m_pointer[index];
		}



	};

	#include "..\src\vector.tpp"

}
