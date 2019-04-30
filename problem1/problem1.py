# This function will find the sum of the 
# multiples of given 'integer', such that
# all multiples are below upper_limit
def sum_of_multiples(integer, upper_limit):
    multiplier = 1
    sum = 0
    while integer * multiplier < upper_limit: #is there any way to do the integer * multiplier only once?
        sum += integer * multiplier
        multiplier += 1
    return sum

print(f"Sum of the multiples of 5 below 16 is {sum_of_multiples(5, 16)}")