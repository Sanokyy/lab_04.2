#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, y;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;

    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x"
        << " |" << setw(12) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (fabs(x) < 0.000001)
        {
            cout << "|" << setw(7) << setprecision(2) << x
                << " |" << setw(12) << "undefined"
                << " |" << endl;
        }
        else
        {
            if (x < 0)
            {
                y = 2.0 / x + fabs(x) + 1 + 4 * x * x;
            }
            else if (x <= 2)
            {
                y = 2.0 / x + fabs(x)
                    + pow(exp(x) + fabs(x), 2);
            }
            else
            {
                y = 2.0 / x + fabs(x)
                    + 5 * sin(x * x + 1);
            }

            cout << "|" << setw(7) << setprecision(2) << x
                << " |" << setw(12) << setprecision(3) << y
                << " |" << endl;
        }

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}