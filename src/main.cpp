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
    }

    test.insert(2,999);

    for(int i = 0; i < test.length(); ++i)
    {
        std::cout << i << " " << test[i] << std::endl;
    }

    system("pause");
    return 0;
}
