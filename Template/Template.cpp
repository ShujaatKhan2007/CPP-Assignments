
#include <iostream>
#include <stdexcept>
using namespace std;

// Class Template
template <class T>
class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }

    T subtract(T a, T b)
    {
        return a - b;
    }

    T multiply(T a, T b)
    {
        return a * b;
    }

    T divide(T a, T b)
    {
        if (b == 0)
        {
            throw runtime_error("Division by zero is not allowed!");
        }

        return a / b;
    }
};

// Function Template
template <class T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    try
    {
        cout << "=== CLASS TEMPLATE: INTEGER CALCULATOR ===\n";

        Calculator<int> intCalc;

        cout << "Addition: "
             << intCalc.add(10, 5) << endl;

        cout << "Subtraction: "
             << intCalc.subtract(10, 5) << endl;

        cout << "Multiplication: "
             << intCalc.multiply(10, 5) << endl;

        cout << "Division: "
             << intCalc.divide(10, 5) << endl;

        cout << "\n=== CLASS TEMPLATE: DECIMAL CALCULATOR ===\n";

        Calculator<double> doubleCalc;

        cout << "Addition: "
             << doubleCalc.add(10.5, 2.5) << endl;

        cout << "Division: "
             << doubleCalc.divide(10.0, 4.0) << endl;

        cout << "\n=== FUNCTION TEMPLATE ===\n";

        cout << "Maximum of 10 and 20: "
             << findMax(10, 20) << endl;

        cout << "Maximum of 5.5 and 3.2: "
             << findMax(5.5, 3.2) << endl;

        cout << "\n=== EXCEPTION HANDLING TEST ===\n";

        cout << intCalc.divide(10, 0) << endl;
    }
    catch (const runtime_error& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    cout << "\nProgram executed successfully.\n";

    return 0;
}

