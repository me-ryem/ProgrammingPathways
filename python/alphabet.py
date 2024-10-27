import sys

# Prompting for input
char = input("Enter an alphabet: ")

# in case input is empty
if not char:
    print("Empty!")
    sys.exit(1)    

ch = char[0].upper() # extracting the first character from the input, in uppercase

# checking
if ch >= 'A' and ch <= 'Z':
    if ch in ['A', 'E', 'I', 'O', 'U']:
        print("It is a vowel.")
    else:
        print("It is a consonant.")    
else:
    print("Invalid!")  
