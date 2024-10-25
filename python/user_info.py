# A program that asks the user for their name and age. The program should then display a greeting message that includes their name and age. Additionally, it should check whether the user is an adult (18 years or older) or a minor (under 18) and print an appropriate message based on their age.

name = input("Enter your name: ")
age = int(input("Enter your age: "))

print(f"Merhaba, {name}! You're {age} years of age.")

if age < 18:
    print("You're a minor.")
else:
    print("You're an adult!")
