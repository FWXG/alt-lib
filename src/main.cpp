#include "..\headers\vector.h"
#include <iostream>
#include <Windows.h>
#include <vector>

int main()
{
    alt::vector<int> test;

    test.add_elem(1);

    test.insert(1,2);

    for(int i = 0; i < test.length(); ++i)
    {
        std::cout << i << " " << test[i] << std::endl;
    }

    system("pause");
    return 0;
}
