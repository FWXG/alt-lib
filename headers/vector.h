#pragma once

namespace alt
{
	template<typename T>
	class vector
	{
	private:
		size_t m_length = 0;
		T* m_pointer = nullptr;
		T* m_tmp_arr = nullptr;

	public:

		vector() = default;
		~vector();

		bool is_empty();

		void add_elem(T elem);
		void del_last();
		void clear();

		size_t length();

		T operator[](const int index)
		{
			return m_pointer[index];
		}


		
	};

	#include "..\src\vector.tpp"

}