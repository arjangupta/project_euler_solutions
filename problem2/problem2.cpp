#include <iostream>

void fibonacci_sequence(int max_value)
{
    int previous_previous_value = 1; //first value
    int previous_value = 2; //second value 
    int current_value  = 0;
    int sum = previous_value + previous_previous_value;

    std::cout << "Fibonacci sequence up till " << max_value << ": "
              << previous_previous_value
              << ", " << previous_value;

    while ((previous_value + previous_previous_value) <= max_value)
    {
        current_value           = previous_value + previous_previous_value;
        std::cout << ", " << current_value;
        previous_previous_value = previous_value;
        previous_value          = current_value;
        sum += current_value;
    }

    std::cout << std::endl << "And the sum is " << sum << std::endl;
}

int main()
{
    fibonacci_sequence(300);
    return 0;
}