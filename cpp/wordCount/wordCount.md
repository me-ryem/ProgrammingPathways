## Description
Counts the number of words in a provided file

## Use of ">>"
The operator `>>` treats whitespaces (tabs, spaces, newlines) as delimeters. So the extraction stops whenever there's a whitespace. This enables us to count the words, as words are separated by whitespaces.
 In the code, we use `inFile >> word`, where *word* is a string variable. This line of code extracts the sequence of characters from the file until it encounters a delimeter (whitespaces). 
 we can then proceed to print the contents of the variable *word* if we so wish. 

## EOF 
When the `while(inFile >> word)` loop reaches the end of the file, the stream *fails*, and an *end-of-file* (EOF) flag is set in the flag status of the stream, so the condition of the loop `inFile >> word` returns `false` and the loop is thus exited.

## Iterations
The extraction operator `>>` tracks the position of the cursor. On the first iteration, it reads the sequence of characters until it encounters a delimeter. On the next iteration, the extraction continues from the position where it previously was left off. Ignoring the leading whitespaces, it reads the next sequence and so on.
