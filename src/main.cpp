#include "../headers/constants.h"
#include <iostream>
#include <Windows.h>
#include <random>


int main()
{
    std::string str;

    str = alt::constants::get_pi();

    std::cout << str;


    system("pause");
    return 0;
}
