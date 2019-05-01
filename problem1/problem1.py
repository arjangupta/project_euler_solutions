# This function will find the sum of the 
# multiples of given 'integer', such that
# all multiples are below upper_limit
def sum_of_multiples(integer, upper_limit):
    multiplier = 1
    sum = 0
    multiple = integer * multiplier
    while multiple < upper_limit:
        sum += multiple
        multiplier += 1
        multiple = integer * multiplier
    return sum

print(f"Sum of the multiples of 5 below 16 is {sum_of_multiples(5, 16)}")