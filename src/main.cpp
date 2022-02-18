#include "..\headers\tupple.h"
#include <iostream>
#include <Windows.h>


int main()
{
    int arr[] = {4,5,7,6,54,654};
    alt::tupple<int> t(arr, 6);


    system("pause");
    return 0;
}
