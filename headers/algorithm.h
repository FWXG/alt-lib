#pragma once
#include <cstdint>
#include "../headers/vector.h"

namespace alt
{
    template<typename T>
    class sort
    {
    private:
        sort() = default;
        sort(const sort&);
        sort& operator=(const sort&);

    public:

        static void bubble_sort(T* arr, std::size_t len);
        static void cocktail_sort(T* arr, std::size_t len);
        static void selection_sort(T* arr, std::size_t len);
        static void insertion_sort(T* arr, std::size_t len);
        static void quick_sort(T* arr, std::size_t len);


    };

	#include "..\src\algorithm.tpp"

}
