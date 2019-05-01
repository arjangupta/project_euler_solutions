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

def sum_of_common_multiples(integer1, integer2, upper_limit):
    multiplier = 1
    sum = 0
    larger_integer  = integer1 if integer1 > integer2 else integer2
    smaller_integer = integer1 if integer1 < integer2 else integer2
    multiple = larger_integer * multiplier
    while multiple < upper_limit:
        if multiple % smaller_integer == 0:
            sum += multiple
        multiplier += 1
        multiple = larger_integer * multiplier
    return sum

given_upper_limit = 1000
print(f"Sum of the multiples of 3 or 5 below 1000 is {sum_of_multiples(3, given_upper_limit) + sum_of_multiples(5, given_upper_limit) - sum_of_common_multiples(3, 5, given_upper_limit)}")