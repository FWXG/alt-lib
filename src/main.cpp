#include "..\headers\math.h"
#include <iostream>
#include <Windows.h>


int main()
{
    alt::matrix<double> m(3, 2);

    for (int i = 0; i < m.row_size(); i++)
    {
        for (int j = 0; j < m.col_size(); j++)
        {
            m.init(i, j, j);
        }
    }

    //m.print();
    m.mult_by(7);
    m.mult_by(0.6);
    m.print();
    m.transp();
    std::cout << std::endl;
    m.print();

    system("pause");
    return 0;
}
