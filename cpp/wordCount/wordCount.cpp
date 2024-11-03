#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Prompting for Input
    string path;
    cout << "Enter path to the file: ";
    getline(cin, path);

    int spaces = 0;

    // opening the file
    ifstream inFile(path);

    // error-handling
    if(!inFile) 
    {
        cerr << "Couldn't open file." << endl;
        return 1;
    }
    
    int count = 0;
    string word;

    // counting
    while(inFile >> word)
        count++;

    // output
    cout << "Word count: " << count << endl;
    return 0;
}
        
