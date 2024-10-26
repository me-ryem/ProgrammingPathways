import sys
from decimal import Decimal, ROUND_DOWN

n = input("Enter the amount: $")

# input-check
try:
    n = float(n)
except ValueError:
    print("Invalid!") 
    sys.exit(1)   

# calculation
amount = int (n * 100)
dollars = amount // 100  
amount = amount % 100
quarters = amount // 25
amount = amount % 25
dimes = amount // 10
amount = amount % 10
nickels = amount // 5
pennies = amount % 5

n = Decimal(n) 
formatted_n = n.quantize(Decimal('0.01'), rounding = ROUND_DOWN)

print(f"${formatted_n} is equivalent to {dollars} dollars, {quarters} quarters, {dimes} dimes, {nickels} nickels, and {pennies} pennies.")