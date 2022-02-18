#include "..\headers\point.h"
#include <iostream>
#include <Windows.h>


int main()
{
    alt::smart_pointer<int> s(new int(5));
    alt::smart_pointer<int> b(s);
    std::cout << *b << std::endl;


    system("pause");
    return 0;
}
