import sys
from math import sqrt

while True:
    # prompting for input
    num = input("Enter an integer (-999 to stop): ")

    # error-handling
    try:
        num = int(num)
    except ValueError:
        print("ERROR: Enter a valid integer!")
        continue

    # if input is valid

    if num == -999: # to stop
        sys.exit(0)

    isPrime = True # flag

    if num <= 1: 
        isPrime = False
    elif num != 2 and num % 2 == 0:
        isPrime = False    
    else:
        x = int(sqrt(num))
        # checking for divisors
        for i in range(3, x + 1, 2):
            if num % i == 0: # if a divisor is found
                isPrime = False
                break
        
    if isPrime:
        print("The number is prime.")
    else:
        print("The number is not prime.")
