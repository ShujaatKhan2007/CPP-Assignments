
#include <iostream>
#include <cstdint>
using namespace std;

// Classes for dynamic_cast
class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "dynamic_cast successful: Object is Derived"
             << endl;
    }
};

int main()
{
    // 1. Implicit Type Conversion
    cout << "=== IMPLICIT TYPE CONVERSION ===" << endl;

    int number = 10;
    double result = number;

    cout << "Integer value: " << number << endl;
    cout << "Converted to double: " << result << endl;

    // 2. static_cast
    cout << "\n=== static_cast ===" << endl;

    double decimal = 15.75;
    int converted = static_cast<int>(decimal);

    cout << "Original double: " << decimal << endl;
    cout << "Converted to int: " << converted << endl;

    // 3. const_cast
    cout << "\n=== const_cast ===" << endl;

    int value = 25;
    const int* constPtr = &value;
    int* normalPtr = const_cast<int*>(constPtr);

    cout << "Value using const pointer: "
         << *constPtr << endl;
    cout << "Value using cast pointer: "
         << *normalPtr << endl;

    // 4. dynamic_cast
    cout << "\n=== dynamic_cast ===" << endl;

    Derived object;
    Base* basePtr = &object;

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr != nullptr)
    {
        derivedPtr->display();
    }
    else
    {
        cout << "Conversion failed" << endl;
    }

    // 5. reinterpret_cast
    cout << "\n=== reinterpret_cast ===" << endl;

    int x = 100;
    int* ptr = &x;

    uintptr_t address = reinterpret_cast<uintptr_t>(ptr);

    cout << "Value of x: " << x << endl;
    cout << "Address stored as integer: "
         << address << endl;

    cout << "\nProgram executed successfully." << endl;

    return 0;
}

