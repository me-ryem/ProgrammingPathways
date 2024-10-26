#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n;

    // prompt user for input
    cout << "Enter the amount: $";
    cin >> n;

    // input-check
    if (!cin)
    {
        cout << "Invalid!" << endl;
        return 1; // exit with error
    } 

    int amount = n * 100; // removes the decimal-point

    // calculation
    int dollars = amount / 100;
    amount = amount % 100; // remaining amount
    int quarters = amount / 25;
    amount = amount % 25; // remaining amount updated
    int dimes = amount / 10;
    amount = amount % 10; // remaining amount updates
    int nickels = amount / 5;
    int pennies = amount % 5;

    // output statements
    cout << fixed << setprecision(2); // so that floating-point numbers only display two digits after the decimal-point
    cout << n << " is equivalent to " << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;

    return 0;
}