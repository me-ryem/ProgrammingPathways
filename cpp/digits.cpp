#include <iostream>

using namespace std;

int main()
{
    string n;
    int num, sum = 0;

    // prompting user for input
    cout << "Enter the number: ";
    cin >> n;

    for(char ch : n) // range-based for-loop
    {
        if(!(isdigit(ch))) // error-check
        {
            cout << "Inavlid Input!" << endl;
            return 1;
        }
        else // update sum if numeric
        {
            num = ch - '0';
            sum += num;
        } 
    }

    cout << "Sum of the digits is: " << sum << endl; 

    return 0;
}