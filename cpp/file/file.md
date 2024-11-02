## Overview
The program reads data from one file, and writes it to another. 

## Solution
### Header
For handling files, the `fstream` header must be added. 
### Classes
1. ofstream (output file stream): For writing
2. ifstream (input file stream): For reading
3. fstream (file stream): For both reading and writing
### Opening a File
- `ofstream outFile("filename.txt");` opens or creates the said file for *writing*.
- `ifstreeam inFile("filename.txt");` opens the said file for *reading*.
- If you want to give your file a name that'll be used for it in the program, you can create a *file stream object*: `ofstream myFile;` (creates a file stream object called *myFile*).
Then open the file in it: `myFile.open("filename.txt");`
### Closing a File
You must close the files you've opened once you're done with them, via `file.close();` 
### Reading from a File
We can read from a file using `getline(input_stream, string variable)` where *input_stream* refers to the stream from which the line is to be read, and *string_variable* is where the read line is stored.
### Writing to a File
- `filename << "Text to be written" << endl;`
- `filename << variable_name << endl;`
## Note
- If the file to be opened is in the same directory/folder as your C++ program file, then you can simply do "filename.txt".
- If the file to be opened is not in the same directory, you must then tell the program the path to the file, e.g. `C:/Users/admin/..../folder_name/file_name.txt`
- **Backslashes (\)** are used in Windows, but in order to avoid issues due to `escape sequences`, you can simply use **slashes (/)** which work for all systems.
- Ensure that your program checks whether the file was succesfully opened or not.
