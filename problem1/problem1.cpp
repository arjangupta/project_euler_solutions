#include <iostream>

// This function finds the sum of all multiples of the integer "find_multiples_of".
// All found multiples should be below the integer "upper_limit".
int sum_of_multiples(int find_multiples_of, int upper_limit)
{
    int sum = 0;
    int multiplier = 1;
    while(multiplier * find_multiples_of < upper_limit)
    {
        sum += multiplier * find_multiples_of;
        ++multiplier;
    }
    return sum;
}

int sum_of_common_multiples(int a, int b, int upper_limit)
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

        if (multiple_of_a == multiple_of_b)
        {
            sum += multiple_of_a;
        }

        ++multiplier;
    }

    return sum;
}

int main()
{
    int upper_limit = 16;
    std::cout << "The sum of all multiples of 3 or 5 below " << upper_limit << " is " 
              << (sum_of_multiples(3, upper_limit) + sum_of_multiples(5, upper_limit) - sum_of_common_multiples(3, 5, upper_limit))
              << std::endl;
    return 0;
}