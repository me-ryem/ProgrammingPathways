import sys

name = input("Enter your name: ")
age = input("Enter your age: ")

# input validation
try:
    age = int(age)
except ValueError:
    print(f"{age} is invalid.")
    sys.exit(1)


print(f"Merhaba, {name}! You're {age} years of age.")

if age < 18:
    print("You're a minor.")
else:
    print("You're an adult!")
