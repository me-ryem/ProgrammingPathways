import sys

n = input("Enter the number:")

sum = 0

# error-check
if not n.isdigit():
    print("Invalid!")
    sys.exit(1)

# sum calculation
for ch in n:
   num = int(ch)
   sum += num

print(f"Sum of digits: {sum}")
