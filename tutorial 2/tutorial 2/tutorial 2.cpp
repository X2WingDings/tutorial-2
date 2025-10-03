#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int factoral(double n)
{
    double factorial = 1;

    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{  
    std::cout << factoral(5) <<"\n";

    double e = 1 + (1.0/factoral(1)) + (1.0 / factoral(2)) + (1.0 / factoral(3)) + (1.0 / factoral(4)) + (1.0 / factoral(5)) + (1.0 / factoral(6)) + (1.0 / factoral(7));

    std::cout << e << "\n";
    return 0;
}



