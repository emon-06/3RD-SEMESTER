#include <iostream>
using namespace std;

class LeapYearChecker
{
private:
    int year;

public:
    LeapYearChecker(int y)
    {
        year = y;
    }

    void checkLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " is a leap year." << endl;
        }
        else
        {
            cout << year << " is not a leap year." << endl;
        }
    }
};

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    LeapYearChecker checker(year);
    checker.checkLeapYear();

    return 0;
}
