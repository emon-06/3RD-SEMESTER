#include <iostream>
using namespace std;

class PrimeChecker
{
private:
    int n;

public:
    PrimeChecker(int num)
    {
        n = num;
    }

    void checkPrime()
    {
        if (n <= 1)
        {
            cout << n << " is not a prime number." << endl;
            return;
        }
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number." << endl;
                return;
            }
        }
        cout << n << " is a prime number." << endl;
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    PrimeChecker checker(n);
    checker.checkPrime();

    return 0;
}
