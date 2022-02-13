#include "..\headers\vector.h"
#include <iostream>
#include <Windows.h>

int main()
{
    alt::vector<int> nums;
    for (int i = 0; i < 5; i++)
    {
        nums.add_elem(i);
        std::cout << nums[i] << " ";
    }

    system("pause");
    return 0;
}