#include <iostream>

// This function finds the sum of all multiples of the integers "a" or "b".
// All found multiples should be below the integer "upper_limit".
int sum_of_multiples(int a, int b, int upper_limit)
{
    int larger_integer = (a > b) ? (a) : (b);
    int multiple_of_a = 0;
    int multiple_of_b = 0;
    int sum = 0;
    int multiplier = 1;

    while(multiplier * larger_integer < upper_limit)
    {
        multiple_of_a = a * multiplier;
        multiple_of_b = b * multiplier;

        if (multiple_of_a != multiple_of_b)
        {
            sum += (multiple_of_a + multiple_of_b);
        }
        else
        {
            sum += multiple_of_a;
        }

        ++multiplier;
    }

    return sum;
}

int main()
{
    int upper_limit = 1000;
    std::cout << "The sum of all multiples of 3 or 5 below " << upper_limit << " is " << sum_of_multiples(3, 5, upper_limit) << std::endl;
    return 0;
}