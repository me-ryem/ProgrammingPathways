#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

// prototypes
void mainMenu();
void input(int& hour, int& minute, string& am_pm, char choice);
void to12notation(int hour, int minute);
void to24notation(int hour, int minute, string am_pm);
void results(int hour, int minute, string am_pm);
void toUpperCase(string& str);

int main()
{
    char choice, reprompt;
     
    do
    {
        // display the main menu
        mainMenu();
        cout << "Your choice: ";  
        cin >> choice;
        choice = toupper(choice);

        cout << "*****************************************************************" << endl;

        int hour, min;
        string duration;

        // 24-hour to 12-hour
        if(choice == 'A')
        {
            cout << "You have chosen the conversion from 24-hour to 12-hour notation" << endl;
            input(hour, min, duration, choice); // input
            to12notation(hour, min); // conversion
        }
        // 12-hour to 24-hour
        else if(choice == 'B')
        {
            cout << "You have chosen the conversion from 12-hour to 24-hour notation" << endl;
            input(hour, min, duration, choice); // input
            to24notation(hour, min, duration); // conversion
        }
        else // error-check
        {
            cout << "Invalid choice. Enter 'A' or 'B'" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // reprompt
        } 
        
        // prompting
        cout << "Enter 'Y' to perform another conversion: ";
        cin >> reprompt;
        reprompt = toupper(reprompt);
        if(reprompt != 'y') 
        {
            cout << "*****************************************************************" << endl;
            break; // exiting
        }

    } while(true);

    return 0;

}

// MAIN MENU
void mainMenu()
{
    cout << "*****************************************************************" << endl;
    cout << "Enter 'A' for conversion from 24-hour to 12-hour notation" << endl;
    cout << "Enter 'B' for conversion from 12-hour to 24-hour notation" << endl;
}

// INPUT
void input(int& hour, int& minute, string& am_pm, char choice)
{
    while(true)
    {
        // prompting for hour
        cout << "Enter hours: ";
        cin >> hour;
        if(!cin) // input failure 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // reprompt
        }

        // prompting for minute
        cout << "Enter minutes: ";
        cin >> minute;
        if(!cin) // input failure 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // reprompt
        }
    

        if(choice == 'A')
        {
            // validation-check
            if (hour < 0 || hour > 23 || minute < 0 || minute > 59)
            {
                cout << "Invalid time input. Please enter hours (0-23) and minutes (0-59)." << endl;
                continue; //reprompt
            }
        }

        else if(choice == 'B')
        {
             // validation-check
            if (hour < 1 || hour > 12 || minute < 0 || minute > 59)
            {
                cout << "Invalid time input. Please enter hours (1-12) and minutes (0-59)." << endl;
                continue; // reprompt
            }

            while(true)
            {
                cout << "Enter AM or PM: ";
                cin >> am_pm;
                toUpperCase(am_pm);

                // validation-check
                if(am_pm == "AM" || am_pm == "PM")
                    break; 

                cout << "Invalid. Please enter 'AM' or 'PM'" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                // moves back to start of loop once it reaches this point
            }
        }

        break; // done with input-taking
    }
      
}

// To 12-HOUR notation
void to12notation(int hour, int minute)
{
    string period;
    if(hour >= 12) 
        period = "PM";
    else
        period = "AM";

    // conversion
    if(hour == 0) 
        hour = 12; // midnight
    else if(hour > 12)
        hour -= 12;

    cout << "Time in 12-hour notation is   ";
    results(hour, minute, period);

}

// To 24-HOUR notation
void to24notation(int hour, int minute, string am_pm)
{
    string period = ""; // because there's no AM or PM needed

    // conversion
    if (am_pm == "PM" && hour != 12) // Only add 12 if not noon
        hour += 12;
    else if (am_pm == "AM" && hour == 12) // Convert midnight
        hour = 0;

    cout << "Time in 24-hour notation is   ";
    results(hour, minute, period);
}

// RESULTS
void results(int hour, int minute, string am_pm)
{
    cout << setw(2) << setfill('0') 
         << hour << ":"
         << setw(2) << setfill('0')
         << minute << " "
         << am_pm << endl;
    cout << "*****************************************************************" << endl;
}

// UPPER-CASE
void toUpperCase(string& str)
{
    // converts original string to uppercase
  
    int len = str.length();

    for(char& c : str)
       c = toupper(c); 
}
