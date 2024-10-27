#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    int num;
  
    while (true)
    {
        // prompting for input
        cout << "Enter an integer (-999 to stop): ";
        cin >> num;

        // input-check
        if (!cin)
        {
            cout << "Invalid input!" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits <streamsize> :: max(), '\n');
            continue;
        }
        
        if (num == -999)
        {
            return 0;
        }
        else if (num <= 1 )
        {
            cout << "The number is not prime." << endl;
            continue;
        }
         
        if (num == 2 || num == 3) // in case of 2 and 3
        {
            cout << "The number is prime." << endl;
            continue;
        } 

        if (num % 2 == 0) // checks for even numbers 
        {
            cout << "The number is not prime." << endl;
            continue;
        }

        bool isPrime = true; // flag 

        int n = sqrt(num);

        for (int i = 3; i <= n; i +=2) // checks for non-prime
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << "The number is prime." << endl;
        }   
        else
        {
            cout << "The number is not prime." << endl;
        } 
    }
}
