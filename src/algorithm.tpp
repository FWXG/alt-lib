#include "../headers/algorithm.h"

template<typename T>
void alt::sort<T>::bubble_sort(T* arr, std::size_t len)
{
    for(std::size_t iter = 0; iter < len - 1; ++iter)
    for(std::size_t elem = 0; elem < len - iter - 1; ++elem)
    {
        if(arr[elem] > arr[elem + 1])
        {
            T tmp = arr[elem + 1];
            arr[elem + 1] = arr[elem];
            arr[elem] = tmp;
        }
    }
}

template<typename T>
void alt::sort<T>::quick_sort(T* arr, std::size_t len)
{
    T piv = arr[len - 1];
    for(std::size_t i = 0; i < len - 1; ++i)
    {

    }


}


template<typename T>
void alt::sort<T>::cocktail_sort(T* arr, std::size_t len)
{
    bool flag = true;
    std::size_t start = 0;
    std::size_t end = len - 1;
    while(flag)
    {
        flag = false;
        for(std::size_t elem = start; elem < end; ++elem)
        {
            if(arr[elem] > arr[elem + 1])
            {
                T tmp = arr[elem + 1];
                arr[elem + 1] = arr[elem];
                arr[elem] = tmp;
                flag = true;
            }
        }

        if(!flag)
            break;

        --end;
        flag = false;

        for(std::size_t elem = end - 1; elem > start; --elem)
        {
            if(arr[elem] > arr[elem + 1])
            {
                T tmp = arr[elem + 1];
                arr[elem + 1] = arr[elem];
                arr[elem] = tmp;
                flag = true;
            }
        }

        ++start;
    }
}

template<typename T>
void alt::sort<T>::selection_sort(T* arr, std::size_t len)
{
    for (std::size_t i = 0; i < len - 1; ++i)
    {
        std::size_t min_idx = i;

        for (std::size_t j = i + 1; j < len; ++j)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        if (min_idx != i)
        {
            T tmp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = tmp;

        }
    }
}

template<typename T>
void alt::sort<T>::insertion_sort(T* arr, std::size_t len)
{
    for(std::size_t i = 1; i < len; ++i)
    {
        int tmp_i = i;
        while(tmp_i > 0 && arr[tmp_i - 1] > arr[tmp_i])
        {
            T tmp = arr[tmp_i - 1];
            arr[tmp_i - 1] = arr[tmp_i];
            arr[tmp_i] = tmp;
            tmp_i -= 1;
        }
    }
}









