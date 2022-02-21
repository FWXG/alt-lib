#include "..\headers\math.h"
#include <iostream>
#include <Windows.h>
#include <random>


int main()
{

    alt::matrix<int> m(3,2);
    alt::matrix<int> x(2,3);

    for(int i = 0; i < m.row_size(); ++i)
    for(int j = 0; j < m.col_size(); ++j)
        m.init(i, j, rand() & 100);


    for(int i = 0; i < x.row_size(); ++i)
    for(int j = 0; j < x.col_size(); ++j)
        x.init(i, j, rand() & 100);

    alt::matrix<int> l = alt::matrix<int>::mult_matrix(m,x);

    l.print();


    system("pause");
    return 0;
}
