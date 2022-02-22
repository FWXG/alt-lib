#include "../headers/constants.h"
#include <iostream>
#include <Windows.h>
#include <random>


int main()
{
    std::string str;
    alt::constants c;

    str = c.get_eu_mask();

    std::cout << str;


    system("pause");
    return 0;
}
