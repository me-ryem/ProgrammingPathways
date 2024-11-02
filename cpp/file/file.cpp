#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // for writing
    ofstream myOutput; // creating an object for the file to be written to
    myOutput.open("path/to/file/filename.txt"); 

    // for reading
    ifstream myInput; // creating an object for the file to be read
    myInput.open("path/to/file/filename.txt");

    if (myInput && myOutput)
    {
        string line; 
        while(getline(myInput, line)) // reading line by line
            myOutput << line << endl; // writing
    }
    else // in case of error
    {
        cerr << "File couldn't be opened.";
        return 1; 
    }

    // closing the files
    myOutput.close();
    myInput.close();

    return 0;
}
