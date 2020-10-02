//cpp
#include <loops.h>
//I made an if else statement here to handle 3 cases:
//If num is greater than zero, if num is zero, and
//if num is less than zero.

int factorial(int num)
{
    int sum = 1;

    if(num > 0)
    {
        for(int i = num; i > 0; i--)
        {
            sum *= num;
            num--;
        }
        return sum;
    }

    else if(num == 0)
        return 0;

    else if(num < 0)
    {
        for(int i = num; i < 0; i++)
        {
            sum *= num;
            num++;
        }
        return sum;
    }
}