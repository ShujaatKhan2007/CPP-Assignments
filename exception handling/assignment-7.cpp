
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    do
    {
        cout << "\n--- Exception Handling Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "Error: Enter a valid number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (choice == 5)
        {
            cout << "Program terminated successfully.\n";
            break;
        }

        try
        {
            if (choice < 1 || choice > 4)
            {
                throw choice;
            }

            cout << "Enter two numbers: ";

            if (!(cin >> a >> b))
            {
                cin.clear();
                cin.ignore(1000, '\n');
                throw 'E';
            }

            switch (choice)
            {
                case 1:
                    cout << "Result = " << a + b << endl;
                    break;

                case 2:
                    cout << "Result = " << a - b << endl;
                    break;

                case 3:
                    cout << "Result = " << a * b << endl;
                    break;

                case 4:
                    if (b == 0)
                    {
                        throw 0.0;
                    }

                    cout << "Result = " << a / b << endl;
                    break;
            }
        }
        catch (int x)
        {
            cout << "Exception: Invalid menu choice!\n";
        }
        catch (double x)
        {
            cout << "Exception: Division by zero is not allowed!\n";
        }
        catch (char x)
        {
            cout << "Exception: Please enter valid numbers!\n";
        }

    } while (true);

    return 0;
}

