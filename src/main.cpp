#include "..\headers\math.h"
#include <iostream>
#include <Windows.h>
#include <random>


int main()
{

    alt::matrix<int> m(3,3);

    for(int i = 0; i < m.row_size(); ++i)
    for(int j = 0; j < m.col_size(); ++j)
        m.init(i, j, i + j);




    std::cout << m.det_gauss() << std::ends;



    system("pause");
    return 0;
}
