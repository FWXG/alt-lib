#include "..\headers\vector.h"
#include "..\headers\algorithm.h"
#include "..\headers\list.h"
#include <iostream>
#include <list>
#include <Windows.h>


int main()
{

    alt::list<int> l;
    l.push_back(5);
    l.push_back(4);
    l.push_back(9);
    l.push_back(8);

    l.push_front(10);

    l.pop_back();
    //l.pop_front();

    for(int i = 0; i < l.length(); ++i)
    {
        std::cout << l[i] << std::endl;
    }


    system("pause");
    return 0;
}
