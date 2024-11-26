#include <iostream>
using namespace std;

class Fibonacci
{
public:
    void emon(int n)
    {
        int a = 0, b = 1;

        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            int temp = a + b;
            a = b;
            b = temp;
        }

        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Fibonacci fib;
    fib.emon(n);

    return 0;
}
