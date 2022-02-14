#include "..\headers\vector.h"
#include <iostream>
#include <Windows.h>
#include <vector>

int main()
{
    alt::vector<int> test;
    test.reserve(5);

    for(int i = 0; i < test.length(); ++i)
    {
        test.add_elem(i);
        std::cout << test[i] << std::endl;

    }

    std::cout << std::endl << test.at(2);

    system("pause");
    return 0;
}
