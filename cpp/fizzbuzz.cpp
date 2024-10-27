#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0) // if multiple of both 3 and 5
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0) // if multiple of 3
        {
            cout << "Fizz" << endl;      
        }
        else if (i % 5 == 0) // if multiple of 5
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }  

    return 0;
}
