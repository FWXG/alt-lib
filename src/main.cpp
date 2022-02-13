#include "..\headers\vector.h"
#include <iostream>
#include <Windows.h>

int main()
{
    alt::vector<int> nums;
    for (int i = 0; i < 5; i++)
    {
        nums.add_elem(i);
    }

    nums.clear();

    for (int i = 0; i < nums.length(); i++)
    {
        std::cout << nums[i];
    }

    std::cout << std::boolalpha << nums.is_empty();

    system("pause");
    return 0;
}