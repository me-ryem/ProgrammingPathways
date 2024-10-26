#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;

    // prompting for input
    cout << "Enter an alphabet: ";
    cin >> ch;

    // converting to uppercase
    ch = toupper(ch);

    // error-check
    if (ch < 'A' || ch > 'Z')
    {
        cout << "Invalid!" << endl;
        return 1;
    }

    // vowels
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};

    // checking for vowels
    for (char c : vowels)
    {
        if (c == ch )
        {
            cout << "It is a vowel." << endl;
            return 0;
        }
    }

    // if it isn't a vowel
    cout << "It is a consonant." << endl;
    return 0;
}
