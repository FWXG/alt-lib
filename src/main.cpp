#include "..\headers\vector.h"
#include "..\headers\algorithm.h"
#include <iostream>
#include <Windows.h>
#include <vector>

int main()
{

    int arr[] {7,1,6,4};
    alt::sort<int>::cocktail_sort(arr, 4);


    for(int i = 0; i < 4; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    system("pause");
    return 0;
}
