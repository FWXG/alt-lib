#include "..\headers\math.h"
#include <iostream>
#include <Windows.h>
#include <random>


int main()
{

    alt::math_vector<double> v(2);
    v.add_elem(3);
    v.add_elem(4);

    alt::math_vector<double> a(2);
    v.add_elem(7);
    v.add_elem(3);

    alt::math_vector<double>::scalar_mult(a, v);



    system("pause");
    return 0;
}
