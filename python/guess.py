import random

n = random.randint(0, 100) # generates a random number from 0 to 100, inclusive.

while True:
    # prompting for input
    guess = input("Guess the number (0-100): ") 

    # error-check 
    for ch in guess:
        if not ch.isnumeric():
            print("Invalid!")
            break # if non-numeric character is found
    else:    
        # converting to int
        guess = int(guess)

        # range-check
        if guess < 0 or guess > 100:
            print("Inavlid. Range: [0, 100]")
            continue

        # checking
        if guess == n:
            print("You've got it right!")
            break
        elif guess < n:
            print("Your guess is smaller than the number.")
            continue
        else:
            print("Your guess is greater than the number.")

    continue # if the for-loop was broken out of
    
