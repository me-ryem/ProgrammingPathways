#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Prompting for input
    string to_be_copied, copy;
    cout << "Enter respective paths for" << endl;
    cout << "File to be copied: ";
    getline(cin, to_be_copied);
    cout << "File to copy to: ";
    getline(cin, copy);

    // for writing
    ofstream myOutput; // creating an object for the file to be written to
    myOutput.open(copy); 

    // for reading
    ifstream myInput; // creating an object for the file to be read
    myInput.open(to_be_copied);

    if (myInput && myOutput)
    {
        string line; 
        while(getline(myInput, line)) // reading line by line
            myOutput << line << endl; // writing
    }
    else // in case of error
    {
        cerr << "Couldn't open file.";
        return 1; 
    }

    // closing the files
    myOutput.close();
    myInput.close();

    return 0;
}
