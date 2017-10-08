//Header and Libraries
#include <iostream>
using namespace std;

/*      Project 2
        September 19, 2017

        This project calculates gross pay, social security tax, federal income tax,
        state income tax, union dues, health insurance cost, and then gives you
        your net-take home based off of how many hours you worked and how many
        dependents you have.
*/

int main()
{
        //Declare Variables
        double gpay, rate; //Gross pay and hourly rate of pay
        int hourw, depend; //Hours worked and # of dependents
        char ans = 'y'; //For looping program

        //Initiate loop for continuous calculations
        while (toupper(ans) == 'Y')
        {
                //Input
                cout << "Enter number of hours worked: ";
                cin >> hourw;

                //Checking validity of hours, since you can't work negative hours
                if (hourw > 0)
                {
                        //More input
                        cout << "Enter hourly rate of pay: ";
  cin >> rate;
  cout << "Enter number of dependents: ";
                        cin >> depend;

                        //Calculations and processing
                        if (hourw < 40) //Checks for overtime
                        {
                                gpay = 16.78 * hourw; //Calculates normal hourly wage
                        }
                        else
                        {
                                gpay = (16.78 * hourw) + ((hourw - 40) * (16.78 * 1.5)); //Calculates overtime pay
                        }
                        //Start Output and Calculations
                        //Gross pay
                        cout << "Gross pay is $" << gpay << endl;

                        //Social Security Tax
                        cout << "Amount withheld for Social Security: $" << (0.06 * gpay) << endl;

                        //Federal Income Tax
                        cout << "Amount withheld for Federal Income: $" << (0.14 * gpay) << endl;

                        //State Income Tax
                        cout << "Amount withheld for State Income: $" << (0.05 * gpay) << endl;

                        //Union dues
                        cout << "Amount withheld for union dues: $10\n";

                        //Checks dependents
                        if (depend >= 3)
                        {
                                //Health insurance cost
                                cout << "Amount withheld for health insurance: $35\n";
                                cout << "Net-take home is: $" << (gpay * (1 - 0.06 - 0.05 - 0.14) - 10 - 35) << endl;
                        }

                        //Net-take home
                        cout << "Net-take home is: $" << (gpay * (1 - 0.06 - 0.05 - 0.14) - 10) << endl;
                }
                else
                {
                        cout << "ERROR: Please enter a positive non-zero integer.\n"; //Error message
                }

                //Prompt for loop answer
                cout << "Repeat calculations for different values? (y/n): ";
                cin >> ans;

        }

        return 0;
}
