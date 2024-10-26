## Description
The program takes input from the user (e.g. 4.56) and then converts it into equivalent smaller financial units i.e. dollars, quarters, dimes, nickels and pennies.

## Truncation without rounding
I first wrote the program in C++ and then tried to convert it to Python. Apart from the actual operations being done, there were a few things that needed to be dealt with just for the sake of it. 
since the user wasn't bound to enter a number upto two decimal places only, the program had to truncate the remaining digits itself. In C++, I simply used *setprecision()* to truncate.
In Python, however, truncating simply by using *{variable: .2f}* came with rounding - which I did not want.
So, import a ***Decimal** class* from the *decimal module* which helps us convert the user-input into an *object*. Once the object is created, methods can be used to work on it. 
`n = Decimal(n)` This line of code converts the variable n (which is of type float) into a *Decimal class object* using the *Decimal constructor* i.e. Decimal()
Once this object has been created, we can use a method called *quantize()* which allows you to specify the precision of a *Decimal* object. 
`formatted_n = n.quantize(Decimal('0.01'))` This line of code performs the *quantize()* method on the object *n*. `Decimal('0.01)` specifies the precision and *quantize()* rounds it.
The *quantize()* method takes two arguments when it is called: `object.quantize(exp, rounding)` 
*exp* parameter specifies the target precision to which you want to round.
*rounding* parameter specifies the rounding behavior. By default, it is set to `ROUND_HALF_EVEN` which rounds a number to the nearest neighbor. When the number is exactly halfway between two possible rounded values, it rounds towards the nearest even digit.
If we don't want to round, we set this parameter to `ROUND_DOWN`, but this has to be imported explicitly, too. 
`from decimal import Decimal, ROUND_DOWN` imports *Decimal class* and *ROUND_DOWN mode* of rounding from the *decimal module*.
To truncate without rounding, we do this: 
```python
n = Decimal(n) # where n was a float until this line of code
formatted_n = n.quantize(Decimal('0.01'), rounding = ROUND_DOWN)```
