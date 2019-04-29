#include <iostream>

void fibonacci_sequence_evens_sum(int max_value)
{
    int previous_previous_value = 1; //first value
    int previous_value = 2; //second value 
    int current_value  = 0;
    int sum = previous_value; //only 2 is even

    std::cout << "Fibonacci sequence up till " << max_value << ": "
              << previous_previous_value
              << ", " << previous_value;

    while ((previous_value + previous_previous_value) <= max_value)
    {
        current_value           = previous_value + previous_previous_value;
        std::cout << ", " << current_value;
        previous_previous_value = previous_value;
        previous_value          = current_value;
        if (current_value % 2 == 0)
        {
            sum += current_value;
        }
    }

    std::cout << std::endl << "Sum of the even Fibonacci terms is: " << sum << std::endl;
}

int main()
{
    fibonacci_sequence_evens_sum(4000000); //four million
    return 0;
}