## Description
The program takes a number from the user as input, and displays the sum of its digits

## Solution
This could be done in a bunch of different ways. Taking input in an `int` variable seems to be the first thought that comes to mind, but if the input happens to be an int, we'll have to perform mathematical operations on it to get the individual digits.
I would've gone with this approach if there was a maximum limit to how many digit-long the input should be, but since it wasn't the case, the best idea to me was to take input in a string.
Now, the usual input-check `if(!cin)` couldn't be used here since a string can contain literally any character. The immediate solution was to check the string character by character, and exit with an error as soon as a non-numeric character is encountered.
Since a string is basically an array of characters, we could simply iterate over each element of the array and check if it's a digit or not. 
Initially, I was going to use a for-loop to iterate over each character of the string and add them to the `sum` variable, but during the error-check, it felt stupid to iterate over the whole string again.
So, I used an `else` statement to add the numeric characters to the `sum` variable. If all the characters in the string are found to be numeric, then the for-loop exits after iterating over the whole string.
Once the foor loop is exited, the control shifts to the `cout` statements, effectively displaying the sum of the digits.
The for loop used in this program was
`for (char ch : n)`

## Range-based FOR loop
A range-based for loop is a convenient way to iterate over elements in a collection, such as arrays, or strings, without needing to manage the indices or iterators manually.
The syntax is 
```cpp
for (declaration : collection) 
{
    // code block to execute for each element
}
