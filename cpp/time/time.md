## Overview
The program follows a modular approach to convert time between 24-hour and 12-hour formats. It offers a user-friendly interface for performing conversions both ways.

## Main Function
The `main()` function calls `mainMenu()` to display the conversion choices to the user. It then prompts the user for their choice and handles invalid or failed input through a `do-while` loop, which reprompts in case of invalid input, otherwise exits.
To ensure case-insensitivity, the user’s choice is converted to uppercase before being evaluated. Depending on the choice, it calls either the `to12notation` or `to24notation` function and displays the conversion mode before proceeding.
The function uses `if` and `else-if` statements to determine the correct conversion. Error handling is included with a final `else` block that clears the input buffer, repairs the `cin` state, and reprompts the user by continuing the loop.
Once the conversion is done, the user is asked if they wish to perform another conversion. The input is handled case-insensitively, and the loop continues only if the response is ‘Y’ (case-insensitive). Otherwise, the program exits by breaking out of the loop.

## Main Menu
The `mainMenu()` function simply displays the available conversion choices to the user. Although it could be more efficient by also accepting the user’s choice, the program was designed to adhere to specific instructions for a graded task, where this function is intended only for displaying the options.
An alternative approach would be to eliminate this function entirely and integrate its functionality directly into `main()`.

## Taking Time Input
The `input()` function takes time input from the user based on the selected conversion format. It uses an infinite loop to reprompt the user in case of errors.
First, the function prompts the user for the hour input, checks for input failure, and immediately reprompts by clearing the input buffer, fixing the fail-state of cin, and using `continue` to skip to the next iteration if necessary.
The same logic applies to the minute input.
If no input failure occurs, the function checks whether the input is valid based on the selected conversion mode. Invalid input will trigger an error message with the correct range and reprompt the user by skipping the current loop iteration with `continue`.
- For conversion from 24-hour notation, the valid hour range is 0 to 23, and the valid minute range is 0 to 59.
- For conversion from 12-hour notation, the valid hour range is 1 to 12, and the minute range remains 0 to 59.
For the 12-hour format, there is a nested loop that asks for AM or PM input. The nested loop for AM/PM input is part of the 12-hour input validation process. The input is handled case-insensitively by converting it to uppercase before checking. If the input is valid (AM or PM), the loop exits. Otherwise, an error message is displayed, the input buffer is cleared, and the user is reprompted.
Once valid input is received, the function exits the loop and breaks out of the main infinite loop, completing the time input process successfully.

## 12-hour Conversion
The `to12notation()` function introduces a string to store either "AM" or "PM" based on the time input.
If the hour is 12 or greater, it assigns "PM" to the string; otherwise, it assigns "AM". The function then checks if the hour is 0 (midnight), setting the hour to 12. If the hour is greater than 12, it subtracts 12 to convert to the 12-hour format.
The result is displayed by calling the `results()` function.

## 24-hour Conversion
The `to24notation()` function sets period to an empty string since AM/PM is not used in the 24-hour format.
The function checks if it's PM and the hour is not 12 (i.e., it is not noon). If so, it adds 12 to the hour. Otherwise, if the hour is 12 AM (midnight), the hour is set to 0.
Finally, it calls the `results()` function to display the converted time.

## Conversion Result
The `results()` function formats the converted time and displays it on the screen. It uses `setw(2)` and `setfill(0)` for formatting to ensure the output is neatly aligned.

## Uppercase
The `toUpperCase()` function converts a string to uppercase.
The parameter `string&` means the function accepts the *reference* of the string, allowing the function to modify the original string directly. This is called **passing by reference**. If string `str` was used instead of `string& str`, the string would be copied, and only the copy would be modified, leaving the original string unchanged.
This function uses a *range-based for loop* to iterate over each character of the string and converts it to uppercase using the `toupper()` function.
The syntax `char& c : str` ensures that `c` refers to the original character in the string, so the modification happens directly on the original string instead of a copy.
