## Overview
The program prompts the user to enter a number and checks if it is a prime number.

## Issues
Initially, the prime-checking logic iterated from `2` to `num - 1` to find any divisors. If a divisor was found, the program would inform the user that the number isn't prime. It also handled special cases like negative numbers, 1, and 2. The program included error handling to detect invalid input using `cin.clear()` and tried to reset the input buffer with `cin.ignore(1000)`. However, an infinite prompt loop occurred, even when valid input was provided.

The issue arose from the newline character (\n) remaining in the input buffer. Although `cin.ignore(1000)` seemed sufficient, the newline character wasn't removed, leading to the program repeatedly triggering the input prompt.

## Explanation
The `cin.ignore(n, delimiter)` function works by ignoring up to n characters or until it encounters the specified delimiter. By default, the delimiter is \n (newline). Here's how the behavior differs depending on how it's used:

- Without explicitly mentioning the delimiter:
`cin.ignore(1000)` ignores characters up to the newline but leaves the newline character (\n) in the buffer.

- With an explicit delimiter:
`cin.ignore(1000, '\n')` ignores characters up to and including the newline character.

In the original code, using cin.ignore(1000) left the newline in the buffer, causing the prompt to repeat endlessly. Since \n was not ignored, even valid inputs triggered the prompt again.

## Solution
Specifying the delimiter ensures that the newline character is also cleared from the buffer. Changing the input clearing line to the following solves the problem by ensuring the buffer is properly reset before the next input prompt.

```cpp
cin.ignore(1000, '\n');
