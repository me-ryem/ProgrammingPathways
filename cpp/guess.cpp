#include <iostream>
#include <limits> // to use numeric_limits
#include <ctime> // to use time()
#include <cstdlib> // to use rand() and srand()

using namespace std;

int main()
{
    srand(time(0)); // seeding rand() with current time to ensure it generates a different number each time
    int n = rand() % 101; // generates a random number from 0 to 100
    
    int guess;

    while (true)
    {
        // prompting for input
        cout << "Guess the number (0-100): ";
        cin >> guess;

        // error-check
        if (!cin) // if cin has entered fail-state
        {
            cout << "Invalid!" << endl;
            cin.clear(); // clearing the fail-state
            cin.ignore(numeric_limits <streamsize> :: max(), '\n'); // clears the entirety of input buffer upto and including the newline character
            continue;
        }
        else if (guess < 0 || guess > 100)
        {
            cout << "Invalid. Range: [0, 100]" << endl;
            continue;
        }

        // checking
        if (n == guess)
        {
            cout << "You've got it right!" << endl;
            break;
        }
        else if (guess < n)
        {
            cout << "Your guess is smaller than the number." << endl;
            continue;
        }
        else   
        {
            cout << "Your guess is greater than the number." << endl;
            continue;
        }
    }
    return 0;
}
