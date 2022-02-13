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

    nums.del_last();

    for (int i = 0; i < nums.length(); i++)
    {
        std::cout << nums[i];
    }


    system("pause");
    return 0;
}