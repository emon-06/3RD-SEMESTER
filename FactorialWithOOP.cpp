#include <iostream>
using namespace std;

class FactorialCalculator
{
private:
    int n;

public:
    FactorialCalculator(int num)
    {
        n = num;
    }

    int calculate()
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    int n;
    cin >> n;
    FactorialCalculator calculator(n);
    cout << calculator.calculate() << endl;
    return 0;
}
